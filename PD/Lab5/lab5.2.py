import time
import pandas as pd
from bs4 import BeautifulSoup
import requests

def get_exchange_rates(url):
    main_df = pd.DataFrame(columns=['USD', 'EUR', 'RON'])
    for day in range(1, 32):
        temp_url = url.format(day)
        response = requests.get(temp_url)

        if response.status_code == 200:
            soup = BeautifulSoup(response.text, 'html.parser')
            tbody = soup.find('tbody')
            if tbody:

                exchange_rates = {}
                rows = tbody.find_all('tr')
                for row in rows:
                    columns = row.find_all('td')
                    currency = columns[0].text.strip()

                    exchange_rates[currency] = columns[3]

                df = pd.DataFrame.from_dict(exchange_rates, orient='index', columns=[f'2023-10-{day}'])
                df = df.T
                df = df[['USD', 'EUR', 'RON']]
                main_df = pd.concat([main_df,df])

            else:
                print("Table body not found on the page.")
        else:
            print(f"Failed to retrieve the page. Status code: {response.status_code}")
    main_df[['USD', 'EUR', 'RON']] = main_df[['USD', 'EUR', 'RON']].replace(',', '.', regex=True).astype(float).round(2)

    return main_df

url_micb = "https://www.curs.md/ro/office/micb/2023-11-{}/csv"
url_bcr = 'https://www.curs.md/ro/office/bcr/2023-11-{}/csv'
url_eximbank = 'https://www.curs.md/ro/office/eximbank/2023-11-{}/csv'

micb_rates_df = get_exchange_rates(url_micb)
bcr_rates_df = get_exchange_rates(url_bcr)
eximbank_rates_df = get_exchange_rates(url_eximbank)

micb_rates_df.to_csv('./micb_exchange.csv')
bcr_rates_df.to_csv('./bcr_exchange.csv')
eximbank_rates_df.to_csv('./eximbank_exchange.csv')
