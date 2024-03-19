import requests
from bs4 import BeautifulSoup

# Function to get the titles of books with a 2-star rating
def get_titles_with_two_stars(url):
    titles = []
    while True:
        # Send a request to the URL
        response = requests.get(url)
        soup = BeautifulSoup(response.text, 'html.parser')

        # Find the relevant elements on the page
        books = soup.find_all('article', class_='product_pod')

        # Iterate through each book and check its rating
        for book in books:
            rating = book.find('p', class_='star-rating')['class'][1]
            if rating.lower() == 'two':
                title = book.h3.a['title']
                titles.append(title)

        # Check if there's a next page
        next_page = soup.find('li', class_='next')
        if next_page:
            url = url.rsplit('/', 1)[0] + '/' + next_page.a['href']
        else:
            break

    return titles

# URL of the starting page
start_url = 'http://books.toscrape.com/catalogue/page-1.html'

# Get the titles with two stars
result = get_titles_with_two_stars(start_url)

# Print the result
print(result)
