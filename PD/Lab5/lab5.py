import os
import requests
from bs4 import BeautifulSoup
from urllib.parse import urljoin, urlparse
import random
import shutil

def download_image(url, folder, min_size=5500):
    response = requests.get(url, stream=True)
    if response.status_code == 200:
        # Extrage numele imaginii din URL
        image_name = os.path.join(folder, os.path.basename(urlparse(url).path))
        
        # Verifică dimensiunea imaginii
        if 'Content-Length' in response.headers:
            image_size = int(response.headers['Content-Length'])
            if image_size < min_size:
                print(f'Imaginea {image_name} are o dimensiune mai mică de {min_size} și nu va fi descărcată.')
                return None

        with open(image_name, 'wb') as file:
            for chunk in response.iter_content(chunk_size=5500):
                file.write(chunk)
        return image_name
    else:
        return None

def capture_wikipedia_data(url, max_images=5):
    response = requests.get(url)
    if response.status_code == 200:
        soup = BeautifulSoup(response.text, 'html.parser')

        # Capturare titlu paginii
        page_title = soup.title.string.strip()

        # Capturare titluri secțiuni
        section_titles = [section.get_text().strip() for section in soup.find_all('span', {'class': 'mw-headline'})]

        # Găsește toate imaginile de pe pagină
        all_images = soup.find_all('img')
        
        # Alege max_images imagini aleatoare
        selected_images = random.sample(all_images, min(len(all_images), max_images))

        folder = 'Images'

        # Curățare director existent
        if os.path.exists(folder):
            shutil.rmtree(folder)

        # Recreare director
        os.makedirs(folder, exist_ok=True)

        for i, image in enumerate(all_images):
            image_url = urljoin(url, image['src'])
            image_path = download_image(image_url, folder)
            if image_path:
                print(f'Imagine {i+1} descărcată la: {image_path}')

        return page_title, section_titles
    else:
        print(f'Eroare la accesarea paginii: {response.status_code}')

if __name__ == '__main__':
    wikipedia_url = 'https://en.wikipedia.org/wiki/Python_(programming_language)'
    page_title, section_titles = capture_wikipedia_data(wikipedia_url, max_images=5)

    print(f'Titlul paginii: {page_title}')
    print('Titlurile secțiunilor:')
    for section_title in section_titles:
        print(f'- {section_title}')
