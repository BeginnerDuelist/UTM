
'''
@Cerinta: 1. Scrieți secvența de cod care regrupeză datele din cele 3 fișiere csv (obținute la laboratul
precedent) după o caracteristică de bază (de ex: cursul valutar de la 3 bănci pentru aceeași
zi).

@Caracteristica: Toate datele de pe site-ul "Weather"
'''
import pandas as pd
print("\nSarcina 1")
micb_rates_df = pd.read_csv(r'C:\\Users\\catal\\Desktop\\PD\\Lab5\\micb_exchange.csv', index_col=0)
bcr_rates_df = pd.read_csv(r'C:\\Users\\catal\\Desktop\\PD\\Lab5\\bcr_exchange.csv', index_col=0)
eximbank_rates_df = pd.read_csv(r'C:\\Users\\catal\\Desktop\\PD\\Lab5\\eximbank_exchange.csv', index_col=0)

df_regrupat = pd.merge(micb_rates_df, bcr_rates_df, left_index=True, right_index=True, suffixes=('_micb','_bcr'))
df_regrupat = pd.merge(df_regrupat, eximbank_rates_df.add_suffix('_eximbank'), left_index=True, right_index=True)

df_regrupat.to_csv("Df_grupat.csv",index=True)

'''
@Cerinta: 2. Determinați min, max, media pentru valorile regrupate pentru fiecare zi aparte și min, max
media pentru toate datele stocate.
'''
print("\nSarcina 2")
min_pe_zi = df_regrupat.min(axis=1)
max_pe_zi = df_regrupat.max(axis=1)
media_pe_zi = df_regrupat.mean(axis=1)

# Calculul pentru toate datele stocate
min_total = df_regrupat.min().min()
max_total = df_regrupat.max().max()
media_total = df_regrupat.mean().mean()

# Afisează rezultatele
print("Minim pe zi:")
print(min_pe_zi)
print("\nMaxim pe zi:")
print(max_pe_zi)
print("\nMedie pe zi:")
print(media_pe_zi)

print("\nMinim total:")
print(min_total)
print("\nMaxim total:")
print(max_total)
print("\nMedie totală:")
print(media_total)

'''
@Cerinta: 3. Scrieți secvența de cod care va împărți fișierul csv obținut după concatinare în N fișiere,
unde fiecare fișier individual va corespunde unei săptămâini (7 rânduri). Fișierele sunt
denumite după prima și ultima dată pe care le conțin (de ex 20231103_20231109.csv).
'''
print("\nSarcina 3")
df_regrupat.index = pd.to_datetime(df_regrupat.index)

df_regrupat = df_regrupat.sort_index()

lines_per_week = 7

for i in range(0, len(df_regrupat), lines_per_week):
    week = df_regrupat.iloc[i:i+lines_per_week]
    filename = f"{week.index[0].strftime('%Y%m%d')}_{week.index[-1].strftime('%Y%m%d')}.csv"
    week.to_csv(filename, index=True)
    print(f"Creat fișierul: {filename}")

'''
@Cerinta: 4. Scrieți funcția ce are o dată de intrare tip datetime și returnează liniile din DataFrame (din
fișierul cu date concatinate) pentru această dată sau None dacă nu există date pentru această
dată.
'''
print("\nSarcina 4")
def get_data_for_date(data_frame, target_date):

    if target_date in data_frame.index:
        return data_frame.loc[target_date]
    else:
        print(f"Nu există date pentru data: {target_date}")
        return None

target_date = pd.to_datetime("2023-10-08")
result = get_data_for_date(df_regrupat, target_date)
if result is not None:
    print(result)

'''
@Cerinta: 5. Scrieți secvența de cod care permite afișarea datelor pe secvențe de timp. De ex. pentru
fiecare săptămănă separat (funcția are o dată de intrare tip datetime) și returnează liniile
din DataFrame pentru această perioadă sau None dacă nu există date pentru zilele indicate.
'''

print("\nSarcina 5")
def get_data_for_week(data_frame, target_date):
    if not isinstance(data_frame.index, pd.DatetimeIndex):
        data_frame.index = pd.to_datetime(data_frame.index)

    start_of_week = target_date - pd.Timedelta(days=target_date.dayofweek)

    end_of_week = start_of_week + pd.Timedelta(days=6)

    if start_of_week in data_frame.index and end_of_week in data_frame.index:
        return data_frame.loc[start_of_week:end_of_week]
    else:
        print(f"Nu există date pentru săptămâna care conține data: {target_date}")
        return None

target_date = pd.to_datetime("2023-10-08")

result = get_data_for_week(df_regrupat, target_date)
if result is not None:
    print(result)

import matplotlib.pyplot as plt


target_date = pd.to_datetime("2023-10-20")


data_for_target_date = get_data_for_date(df_regrupat, target_date)

if data_for_target_date is not None:
    
    data_for_target_date['USD_micb'] = df_regrupat.loc[target_date, 'USD_micb']
    data_for_target_date['EUR_micb'] = df_regrupat.loc[target_date, 'EUR_micb']
    data_for_target_date['RON_micb'] = df_regrupat.loc[target_date, 'RON_micb']

    data_for_target_date['USD_bcr'] = df_regrupat.loc[target_date, 'USD_bcr']
    data_for_target_date['EUR_bcr'] = df_regrupat.loc[target_date, 'EUR_bcr']
    data_for_target_date['RON_bcr'] = df_regrupat.loc[target_date, 'RON_bcr']
    
    data_for_target_date['USD_eximbank'] = df_regrupat.loc[target_date, 'USD_eximbank']
    data_for_target_date['EUR_eximbank'] = df_regrupat.loc[target_date, 'EUR_eximbank']
    data_for_target_date['RON_eximbank'] = df_regrupat.loc[target_date, 'RON_eximbank']
    
    data_for_target_date.plot(kind='bar', figsize=(10, 6))
    

    plt.xlabel('Valută')
    plt.ylabel('Curs Valutar')
    plt.title(f'Cursuri Valutare pentru {target_date.strftime("%Y-%m-%d")}')

    
    plt.show()
else:
    print("Nu există date pentru data specificată.")
