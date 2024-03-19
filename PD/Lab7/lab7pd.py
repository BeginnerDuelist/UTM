
import numpy as np
import scipy 
import sympy
import matplotlib.pyplot as plt
from scipy.fft import fft
from scipy.optimize import fmin

# 1. Calculați √2 cu 100 de zecimale.
print(sympy.N(sympy.sqrt(2),100))

# 2. Calculați 1 2⁄ + 1 3⁄ în aritmetica rațională.
print(sympy.Rational(1, 2) + sympy.Rational(1, 3))

# 3. Calculați forma extinsă a expresiei (𝑥 + 𝑦)6.
x, y = sympy.symbols('x y')
print(sympy.expand((x + y)**6))

# 4. Simplificați expresia trigonometrică sin(𝑥) / cos(𝑥) .
print(sympy.simplify(sympy.sin(x) / sympy.cos(x)))

# 5. Calculați lim𝑥→0 sin(𝑥)/𝑥 .
print(sympy.limit(sympy.sin(x) / x, x, 0))
# 6. Calculați derivata pentru log(𝑥) pentru 𝑥.
print(sympy.diff(sympy.log(x), x))

# 7. Rezolvați sistemul de ecuații 2𝑥 + 3𝑦 = 5, 4𝑥 − 3𝑦 = −4.
ec1 = sympy.Eq(2*x + 3*y, 5)
ec2 = sympy.Eq(4*x + 3*y, -4)
print(sympy.solve((ec1, ec2), (x, y)))

# 8. Există valori booleene x, y care fac expresia (𝑥∨¬𝑦)∧(𝑦∨¬𝑥) adevărată? Argumentați răspunsul, folosiți sym.satisfiable.
print(sympy.satisfiable(sympy.And(sympy.Or(x, sympy.Not(y)), sympy.Or(y, sympy.Not(x)))))

# 9. Rezolvați ecuația diferențială a lui Bernoulli 𝑥 𝑑𝑓(𝑥) 𝑥 + 𝑓(𝑥) − 𝑓(𝑥)2 = 0. Rezolvați
# aceeași ecuație folosind hint='Bernoulli'. Ce observati?
f = sympy.Function('f')
ec = sympy.Eq(x * sympy.Derivative(f(x), x) + f(x) - f(x)**2, 0)
print("Fara hint:", sympy.dsolve(ec)) 
print("Cu hint:", sympy.dsolve(ec, hint = 'Bernoulli')) 


# 10. Folosind funcția quad() din librăria scipy, scrieți un program care rezolvă următoarea
# integrală numerică: 𝐼 = ∫ cos(2𝜋𝑥) 𝑑𝑥 10 . De ce este important să avem o estimare a
# preciziei (sau a erorii) integralei numerice?
def f(x):
    return np.cos(2 * np.pi * x)

rez, err = scipy.integrate.quad(f, 0, 1)
print("rezultat:", rez)
print("err:", err)

# 11. Creați un semnal ca o suprapunere a unei unde sinusoidale de 50 Hz și 70 Hz (cu o ușoară
# schimbare de fază între ele). Apoi transformați semnalul Fourier și trasați valoarea absolută
# a coeficienților (complexi) discreți de transformare Fourier în funcție de frecvență
# (observați vârfuri la 50Hz și 70Hz).

import numpy as np
import matplotlib.pyplot as plt

# Parametrii semnalului
frecventa_1 = 50  # Hz
frecventa_2 = 70  # Hz
amplitudine = 1
faza_1 = 0  # Faza pentru prima componentă
faza_2 = np.pi / 4  # O ușoară schimbare de fază pentru a crea un efect interesant

# Creează un vector de timp între 0 și 1 secundă cu o rezoluție de 1/1000 secunde
timp = np.arange(0, 1, 1/1000)

# Generează semnalul ca o suprapunere a undelor sinusoidale
semnal = amplitudine * (np.sin(2 * np.pi * frecventa_1 * timp + faza_1) +
                        np.sin(2 * np.pi * frecventa_2 * timp + faza_2))

# Trasează semnalul în domeniul timpului
plt.figure(figsize=(10, 6))
plt.subplot(2, 1, 1)
plt.plot(timp, semnal)
plt.title('Semnal în domeniul timpului')
plt.xlabel('Timp (secunde)')
plt.ylabel('Amplitudine')

# Calculează transformata Fourier a semnalului
transformata_fourier = np.fft.fft(semnal)

# Calculează frecvențele corespunzătoare
frecvente = np.fft.fftfreq(len(transformata_fourier), 1/1000)

# Trasează valoarea absolută a coeficienților Fourier în funcție de frecvență
plt.subplot(2, 1, 2)
plt.plot(frecvente, np.abs(transformata_fourier))
plt.title('Transformata Fourier')
plt.xlabel('Frecvență (Hz)')
plt.ylabel('Amplitudine')

# Setează intervalul axei x între -100 și 100
plt.xlim(-100, 100)

plt.tight_layout()  # Asigură o distanță corectă între subgrafice
plt.show()


# 12. Găsiți valoarea minimă a lui 𝑥 pentru optimizarea expresiei cos(𝑥) − 3𝑒−(𝑥−0,2)2.
# Apelați funcția scipy.optimize.fmin care ia ca argument o funcție f pentru a minimiza și o
# valoare inițială x0 de la care să pornească căutarea pentru minim și care returnează valoarea
# lui x pentru care f(x) este (local) minimizat. Repetați căutarea minimului pentru două valori
# (x0 = 1.0 și, respectiv, x0 = 2.0) pentru a demonstra că în funcție de valoarea de pornire
# putem găsi minime diferite ale funcției f.
def functie_optimizare(x):
    return np.cos(x) - 3 * np.exp(-(x-0.2)**2)


valoare_minima_x1 = fmin(functie_optimizare, 1.0)
valoare_minima_x2 = fmin(functie_optimizare, 2.0)

# 13. Efectuați diverse manipulări asupra unei imagini : schimbați orientarea, rezoluția
# (scipy.ndimage oferă manipularea tablourilor n-dimensionale ca imagini). Generați zgomot
# asupra imaginii, apoi folosiți pe rând filtrele Gaussian, median, Wiener. Observați
# eficacitatea fiecărui filtru.
from scipy import ndimage, signal

# Generare imagine de test (o imagine simplă, alb-negru)
original_image = np.random.random((256, 256))

# 1. Schimbarea orientării imaginii
rotated_image = ndimage.rotate(original_image, angle=45)

# 2. Schimbarea rezoluției imaginii
resized_image = ndimage.zoom(original_image, zoom=(0.5, 0.5))

# 3. Generarea de zgomot asupra imaginii
noisy_image = original_image + 0.5 * np.random.normal(size=original_image.shape)

# 4. Aplicarea unui filtru Gaussian
gaussian_filtered = ndimage.gaussian_filter(noisy_image, sigma=2)

# 5. Aplicarea unui filtru median
median_filtered = ndimage.median_filter(noisy_image, size=3)

# 6. Aplicarea filtrului Wiener
wiener_filtered = signal.wiener(noisy_image)

# Afișarea imaginilor
plt.figure(figsize=(12, 8))

plt.subplot(2, 3, 1)
plt.imshow(original_image, cmap='gray')
plt.title('Imagine originală')

plt.subplot(2, 3, 2)
plt.imshow(rotated_image, cmap='gray')
plt.title('Imagine rotită')

plt.subplot(2, 3, 3)
plt.imshow(resized_image, cmap='gray')
plt.title('Imagine redimensionată')

plt.subplot(2, 3, 4)
plt.imshow(noisy_image, cmap='gray')
plt.title('Imagine cu zgomot')

plt.subplot(2, 3, 5)
plt.imshow(gaussian_filtered, cmap='gray')
plt.title('Filtru Gaussian')

plt.subplot(2, 3, 6)
plt.imshow(median_filtered, cmap='gray')
plt.title('Filtru Median')

plt.subplot(2,4,7)
plt.imshow(wiener_filtered,cmap='gray')
plt.title('Filtru Wiener')

plt.show()
