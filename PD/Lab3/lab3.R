cat("\n\nExercitiul 1: \nCreați o funcție care va calcula media unui vector cu o precizie de patru zecimale.\n\n")
media_cu_precizie <- function(vector) {
  rezultat <- round(mean(vector), 4)
  return(rezultat)
}

vector_test <- c(1.234567, 2.345678, 3.456789)
rezultat <- media_cu_precizie(vector_test)
cat("Media vectorului este:", rezultat, "\n")


cat("\n\nExercitiul 2: Calculați factorial folosind 2 bucle prod si for\n\n")
factorial_cu_bucla <- function(n) {
  rezultat <- 1
  for (i in 1:n) {
    rezultat <- rezultat * i
  }
  return(rezultat)
}

factorial_cu_prod <- function(n) {
  if (n == 0) return(1)
  else return(prod(1:n))
}
n <- 5
rezultat_factorial <- factorial_cu_bucla(n)
cat("Factorialul lui factorial_cu_bucla", n, "este:", rezultat_factorial, "\n")

n <- 5
rezultat_factorial <- factorial_cu_prod(n)
cat("Factorialul lui factorial_cu_prod", n, "este:", rezultat_factorial, "\n")


cat("\n\nExercitiul 3: \nCreați o funcție care va calcula media, mediana și abaterea standard a unui vector și va afișa 
una dintre opțiunile alese „medie”, „mediană” sau „SD”(standard deviation).\n\n")

calcul_statistici <- function(vector) {
  optiune <- menu(c("Medie", "Mediană", "SD", "Ieși"), title = "Alege o opțiune:")
  if (optiune == 4) {
    cat("Ai ales să ieși. Programul se încheie.\n")
    break
  } else {
    if (optiune == 1) {
      rezultat <- mean(vector)
      cat("Rezultatul pentru Medie este:", rezultat, "\n")
    } else if (optiune == 2) {
      rezultat <- median(vector)
      cat("Rezultatul pentru Mediană este:", rezultat, "\n")
    } else if (optiune == 3) {
      rezultat <- sd(vector)
      cat("Rezultatul pentru SD este:", rezultat, "\n")
    } else {
      cat("Opțiunea selectată nu este validă. Alegeți o opțiune între 1 și 4.\n")
    }
  }
  }


# Exemplu de utilizare
vector_test <- c(1, 2, 11, 4, 5, 6, 7, 8, 9, 10, 12)
calcul_statistici(vector_test)

cat("\n\nExercitiul 4:\nScrieți o funcție care înlocuiește valorile negative ale unui vector cu valorile lor absolute și 
apoi afișează vectorul modificat.\n\n")
inlocuire_negativ_cu_absolute <- function(vector) {
  vector_modificat <- abs(vector)
  return(vector_modificat)
}

# Exemplu de utilizare
vector_test <- c(1, -2, 3, -4, 5, -6, 7, -8, 9, -10)
vector_modificat <- inlocuire_negativ_cu_absolute(vector_test)
cat("Vectorul modificat este:", vector_modificat, "\n")


cat("\n\nExercitiul 5\n
a) Desenați graficul funcției sinus între 0,5 și 3π (utilizați pi).
\nb) Adăugați următorul titlu: „Graficul funcției sinus”, culoarea curbei trebuie să fie roșie și 
grosimea liniei 15.
\n\n")
# Instalarea pachetului ggplot2 (dacă nu este deja instalat)
if (!requireNamespace("ggplot2", quietly = TRUE)) {
  install.packages("ggplot2")
}

# Încărcarea pachetului ggplot2
library(ggplot2)

# Crearea unui cadru de date pentru x între 0.5 și 3*pi
x <- seq(0.5, 3*pi, length.out = 100)
y <- sin(x)

# Crearea graficului
grafic_sinus <- ggplot(data = data.frame(x = x, y = y), aes(x = x, y = y)) +
  geom_line(color = "red", size = 15) +
  ggtitle("Graficul funcției sinus") +
  xlim(0.5, 3*pi) +
  ylim(-1, 1) +
  xlab("x") +
  ylab("sin(x)")

# Afisarea graficului
print(grafic_sinus)


cat("\n\nExercitiul 6\nÎncărcați setul de date Orange. Desenați un grafic de dispersie a vârstei variabile în funcție de 
circumferința variabilă. \n\n")
data(Orange)
plot(Orange$circumference, Orange$age, pch = 24, col = "blue", main = "Grafic de dispersie",
     xlab = "Circumferință", ylab = "Vârstă")


cat("\n\nExercitiul 7\nDesenați graficul distribuției normale între -6 și 6 (utilizați dnorm). Adăugați o legendă în 
dreapta sus, care va afișa „Distribuție normală între -6 și 6”.\n\n")
# Încărcarea pachetului ggplot2 (dacă nu este deja instalat)
if (!requireNamespace("ggplot2", quietly = TRUE)) {
  install.packages("ggplot2")
}

# Încărcarea pachetului ggplot2
library(ggplot2)

# Crearea unui cadru de date pentru valorile x și densitățile de probabilitate asociate
x <- seq(-6, 6, length.out = 1000)
densitate_probabilitate <- dnorm(x, mean = 0, sd = 1)

# Crearea graficului distribuției normale
grafic_distributie_norm <- ggplot(data = data.frame(x = x, y = densitate_probabilitate), aes(x = x, y = y)) +
  geom_line(color = "black", linewidth = 1) +
  labs(title = "Distribuție normală între -6 și 6",
       x = "x",
       y = "dnorm(x)") +
  theme(legend.position = "top")

# Afișarea graficului
print(grafic_distributie_norm)


cat("\n\nExercitiul 8\nDesenați graficul următoarei funcții f ( x )=x^5+x^3−3x pe intervalul de la -2 la 2\n\n")
# Încărcarea pachetului ggplot2 (dacă nu este deja instalat)
if (!requireNamespace("ggplot2", quietly = TRUE)) {
  install.packages("ggplot2")
}

# Încărcarea pachetului ggplot2
library(ggplot2)

# Crearea unui cadru de date pentru valorile x și funcția f(x)
x <- seq(-2, 2, length.out = 1000)
f_x <- x^5 + x^3 - 3*x

# Crearea graficului funcției f(x)
grafic_fx <- ggplot(data = data.frame(x = x, y = f_x), aes(x = x, y = y)) +
  geom_line(color = "blue", linewidth = 1) +
  labs(title = "Graficul funcției f(x) = x^5 + x^3 - 3x",
       x = "x",
       y = "f(x)")

# Afișarea graficului
print(grafic_fx)

isprime <- function(n) {
  lim <- n/2
  prime <- TRUE
  for (i in 2:lim) {
    if (n %% i == 0) {
      prime <- FALSE
      break  
    }
  }
  return(prime)
}

suma_n_numere_prime <- function(n) {
  suma <- 0
  i <- 1
  while (i <= n) {
    if (isprime(i)) {
      suma <- suma + i
    }
    i <- i + 1  
  }
  print(suma)
}

suma_n_numere_prime(5)

data(airquality)
plot(airquality$Temp,type="l")

