print("Exercitiul 1\n")
# Crearea dicționarului
dictionar = {
    "cheie1": 3.14,
    "cheie2": 2.71,
    "cheie3": 1.618,
    "cheie4": 0.577
}

# Afișarea cheilor dicționarului
chei = dictionar.keys()
print("Chei:", chei)
# Afișarea tuplurilor (cheie, valoare)
tupluri = [(cheie, dictionar[cheie]) for cheie in dictionar]
print("Tupluri (cheie, valoare):", tupluri)

print("Exercitiul 2\n")
import random

# Generați un număr aleator între 0 și 10000 (numărul de secunde)
numar_de_secunde = random.randint(0, 10000)

# Calculați orele, minutele și secundele
ore = numar_de_secunde // 3600
minute = (numar_de_secunde % 3600) // 60
secunde = numar_de_secunde % 60

# Formatați rezultatul sub forma "hh:mm:ss"
timp_formatat = "{:02d}:{:02d}:{:02d}".format(ore, minute, secunde)

print(f"Numărul aleator de secunde: {numar_de_secunde}")
print(f"Reprezentare formatată: {timp_formatat}")

print("Varianta alternativa\n")

from datetime import timedelta

# Converțiți numărul de secunde într-un obiect timedelta
timp = timedelta(seconds=numar_de_secunde)

# Obțineți orele, minutele și secundele din obiectul timedelta
ore = timp.seconds // 3600
minute = (timp.seconds % 3600) // 60
secunde = timp.seconds % 60

# Formatați rezultatul sub forma "hh:mm:ss"
timp_formatat = "{:02d}:{:02d}:{:02d}".format(ore, minute, secunde)

print(f"Numărul aleator de secunde: {numar_de_secunde}")
print(f"Reprezentare formatată: {timp_formatat}")

print("Exercitiul 3\n")
# Definirea celor două obiecte de tip float
float1 = 5.5
float2 = 3.3

# Definirea funcțiilor lambda pentru suma și diferența
suma = lambda x, y: x + y
diferenta = lambda x, y: x - y

# Crearea unei liste cu cele două funcții lambda
functii_lambda = [suma, diferenta]

# Definirea altor tipuri de date
int1 = 2
int2 = 1

# Utilizarea funcției map pentru a apela funcțiile lambda pe diferite tipuri de date
rezultate = []

for functie in functii_lambda:
    rezultate_float = list(map(lambda f: f(float1, float2), [functie]))
    rezultate_int = list(map(lambda f: f(int1, int2), [functie]))
    rezultate.append((rezultate_float, rezultate_int))

# Afișarea rezultatelor
for i, functie in enumerate(functii_lambda):
    print(f"Rezultate pentru funcția {functie.__name__}:")
    print(f"Float: {rezultate[i][0][0]:.2f}")
    print(f"Int: {rezultate[i][1][0]}")

print("Exercitiul 4\n")
# Definirea listei de valori întregi
valori_intregi = [1, 2, 2, 3, 4, 4, 5, 6, 6, 7]

# Utilizarea funcției filter pentru a obține valorile distincte
valori_distincte = list(filter(lambda x: valori_intregi.count(x) == 1, valori_intregi))

# Afișarea valorilor distincte
print("Valorile distincte din lista sunt:", valori_distincte)

print("Exercitiul 5\n")
from functools import reduce

def numar_aparitii_caracter(sir, caracter):
    # Utilizăm funcția reduce pentru a număra aparițiile caracterului
    numar_aparitii = reduce(lambda acc, char: acc + 1 if char == caracter else acc, sir, 0)
    return numar_aparitii

# Exemplu de utilizare
text = "Lorem ipsum dolor sit amet"
caracter_cautat = 'z'
rezultat = numar_aparitii_caracter(text, caracter_cautat)
print(f"Caracterul '{caracter_cautat}' apare de {rezultat} ori în text.")

print("Exercitiul 6\n")
def concateneaza_stringuri(*args):
    # Utilizăm funcția join() pentru a concatena toate șirurile date ca argumente
    rezultat = "".join(args)
    return rezultat

# Exemplu de utilizare
str1 = "Hello, "
str2 = "world!"
str3 = " This is a concatenated string."
rezultat = concateneaza_stringuri(str1, str2, str3)
print(rezultat)

print("Exercitiul 7\n")
# Definirea listei de funcții lambda
functii_lambda = [
    lambda x: x[1] if len(x) >= 2 else None,  # Returnează al doilea caracter
    lambda x: x.upper(),  # Convertște șirul în litere majuscule
    lambda x, c: x.find(c)  # Găsește poziția caracterului dat
]

# Exemplu de șir de test
text = "exemplu"

# Apelarea funcțiilor din listă
for functie in functii_lambda:
    if len(functie.__code__.co_varnames) == 1:  # Verificăm numărul de parametri ai funcției
        print(f"Rezultat pentru funcția lambda: {functie(text)}")
    else:
        print(f"Rezultat pentru funcția {functie.__name__}: {functie(text, 'x')}")

print("Exercitiul 8\n")
def media_notelor(nota1=4, nota2=4, nota3=4):
    media = (nota1 + nota2 + nota3) / 3
    return media

# Exemple de apeluri ale funcției cu diferite combinații de argumente
media1 = media_notelor(8, 9, 7)
media2 = media_notelor(6, 5)  # A treia notă va fi implicit 4
media3 = media_notelor()  # Toate notele vor fi implicite 4
media4 = media_notelor(nota3=9, nota1=7)  # Specificăm notele folosind argumente de tip keyword

print("Media 1:", media1)
print("Media 2:", media2)
print("Media 3:", media3)
print("Media 4:", media4)

print("Exercitiul 9\n")
def suma_primele_N_naturale(N):
    if N <= 0:
        return 0
    else:
        return N + suma_primele_N_naturale(N - 1)

# Exemplu de apel al funcției pentru suma primelor 100 numere naturale
N = 100
rezultat = suma_primele_N_naturale(N)
print(f"Suma primelor {N} numere naturale este: {rezultat}")


