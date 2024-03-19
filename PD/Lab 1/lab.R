# Sarcina 1
cat("Sarcina 1 -------------------------------------------------------\n")
print(x <- c(2:4, 9:13)) #- Se definește un vector x care conține valorile 2, 3, 4, 9, 10, 11, 12 și 13.
print(y <- c("b", "c", "E")) #- Se definește un vector y care conține caracterele "b", "c" și "E".
print(x[5]) #- Se accesează al 5-lea element din vectorul x. 
#Rezultatul este 10.
print(y[2:3]) #- Se accesează elementele 2 și 3 din vectorul y. 
#Rezultatul este "c" și "E".
print(y[c(2, 2, 3)]) #- Se accesează elementele de pe pozițiile 2, 2 și 3 din vectorul y. 
#Rezultatul este "c", "c" și "E".
print(x[50]) #- Aici încerci să accesezi al 50-lea element din vectorul x, dar vectorul x are doar 8 elemente, deci vei primi NA (valoare lipsă).
print(x[-5]) #- Se elimină al 5-lea element din vectorul x. 
#Rezultatul va fi un vector care exclude valoarea 10.
print(x[3]) #- Se accesează al 3-lea element din vectorul x. 
#Rezultatul este este 4.
print(x[c(2, 2, 5:7)]) #- Se accesează elementele de pe pozițiile 2, 2, 5, 6 și 7 din vectorul x. 
#Rezultatul va fi 3, 3, 11, 12 și 13.
print(x[6:1]) #- Se accesează elementele de la al 6-lea la primul element din vectorul x, în această ordine inversă. 
#Rezultatul va fi un nou vector care conține valorile 11, 10, 9, 4 și 3.
print(x[-(1:4)]) #- Se elimină primele patru elemente din vectorul x. 
#Rezultatul va fi un vector care exclude valorile 2, 3, 4 și 9.
print(x[-c(1, 4)]) #- Se elimină elementele de pe pozițiile 1 și 4 din vectorul x. 
#Rezultatul va fi un vector care exclude valorile 2 și 10.
#----------------------------------------------------------------

# Sarcina 2 -----------------------------------------------------
calcul_variante <- function(vector) {
  n <- length(vector) # Lungimea vectorului
  media <- mean(vector) # Calcularea mediei
  varianta <- sum((vector - media) ^ 2) / (n - 1) # Calcularea varianței
  return(varianta) # Returnarea valorii varianței
}

cat("\n\nSarcina 2 -------------------------------------------------------\n")

vector_test <- c(1, 2, 3, 4, 5) # Definirea unui vector de test
variance_result <- calcul_variante(vector_test) # Apelarea funcției pentru calcularea varianței
print(variance_result)
#----------------------------------------------------------------

# Sarcina 3 --------------------------------------------------------
cat("\n\nSarcina 3 -------------------------------------------------------\n")
vector = 1:10 #- Creează un vector de la 1 la 10.
matrice1 = matrix(vector, ncol = 2) #- Construiește o matrice cu 5 rânduri și 2 coloane folosind elementele din vector.
matrice2 = matrix(1:10, nrow = 2, byrow = T) #- Creează o matrice 2x5, introducând elementele de la 1 la 10 pe rânduri.
m = matrix(1:4, nrow = 3, ncol = 3) #- Încearcă să creeze o matrice 3x3, dar are prea puține elemente, astfel că completează cu NA.
resultat = matrice1 %*% matrice2

print(matrice2) #- Afișează matricea matrice2.
cat("\n--- matrice1 ---")
cat("\ndimensiunea = ", dim(matrice1)) #- Returnează dimensiunile matricei matrice1 (5 rânduri, 2 coloane).
cat("\ncoloane = ", ncol(matrice1)) #- Returnează numărul de coloane al matricei matrice1 (2).
cat("\nranduri = ", nrow(matrice1)) #- Returnează numărul de rânduri al matricei matrice1 (5).
cat("\nRezultat inmultirea matrice1 si matrice2\n") #- Efectuează înmulțirea matricială dintre matrice1 și matrice2.
print(resultat)
#-------------------------------------------------------------------------

# Sarcina 4 --------------------------------------------------------------
cat("\n\nSarcina 4 -------------------------------------------------------\n")
print(dim(matrice1))
print(ncol(matrice1))
print(nrow(matrice1))
resultat = matrice1 %*% matrice2

cat("\n- Rezultat inmultirea matrice1 si matrice2\n") #- Efectuează înmulțirea matricială dintre matrice1 și matrice2.
print(resultat)
cat("\n\n- Diagonala matricei\n")
print(diag(resultat)) #- comanda pentru obținerea diagonalei matricei resultat. Dacă resultat este o matrice pătratică, aceasta va returna elementele de pe diagonala principală.
cat("\n\n- Diagonala principală având valorile 3, 2 și 4 matricei\n")
print(diag(c(3, 2, 4))) #- Creează o nouă matrice pătratică cu diagonala principală având valorile 3, 2 și 4. Celelalte elemente vor fi 0.

# vecteur1= (8,3,2) - Această linie dă o eroare de sintaxă. Trebuie să fie vecteur1 <- c(8, 3, 2) pentru a crea un vector cu elementele 8, 3 și 2.
vecteur1 <- c(8, 3, 2) #- Această linie dă o eroare de sintaxă. Trebuie să fie vecteur1 <- c(8, 3, 2) pentru a crea un vector cu elementele 8, 3 și 2.
# vecteur2=(23,6,9) - Similar cu linia de mai sus, aceasta conține o eroare de sintaxă. Trebuie să fie vecteur2 <- c(23, 6, 9).
vecteur2 <- c(23, 6, 9) #- Similar cu linia de mai sus, aceasta conține o eroare de sintaxă. Trebuie să fie vecteur2 <- c(23, 6, 9).

res = rbind(vecteur1, vecteur2) #- Această comandă creează o matrice în care vecteur1 este prima linie și vecteur2 este a doua linie.
vecteur3 = c(2, 4) #- Definește un vector cu elementele 2 și 4.
cat("\n- concatenarea = ", cbind(res, vecteur3)) #- Concatenează vectorul vecteur3 la dreapta matricei res.
cat("\n- Valorile și vectorii proprii ai matricei\n")
print(eigen(resultat)) #- Calculează valorile și vectorii proprii ai matricei resultat folosind funcția eigen().
#-------------------------------------------------------------------------

#Exercițiul 5 -----------------------------------------------------------
cat("\n\nSarcina 5 -------------------------------------------------------\n")
cat("\nprima linie din matricea = ", resultat[1,]) #- Afișează prima linie din matricea resultat.
cat("\ncoloanele 2, 2 și 1 = ", resultat[, c(2, 2, 1)]) #- Afișează coloanele 2, 2 și 1 din matricea resultat.
cat("\nprimul rand este exclus randul = ", resultat[-1,]) #- Afișează toate rândurile, în afară de primul, din matricea resultat.
cat("\nprimele două rânduri, dar exclude prima coloană = ", resultat[1:2, -1]) #- Afișează primele două rânduri, dar exclude prima coloană din matricea resultat.
cat("\nelemente > 51 = ", resultat[resultat > 51]) #- Afișează toate elementele din matricea resultat care sunt mai mari decât 51.
matrix(vector, nrow = 2) #- Creează o matrice cu 2 rânduri, completată cu valorile din vector. Valorile vor fi introduse pe coloane.
matrix(vector, nrow = 2, byrow = T) #- Creează o matrice cu 2 rânduri, iar valorile din vector vor fi introduse pe rânduri.
#-------------------------------------------------------------------------

# Sarcina 6 --------------------------------------------------------------
cat("\n\nSarcina 6 -------------------------------------------------------\n")
y <- matrix(c(1, 2, 3, 5, 10, 12, 13, 22, 5, 9, 8, 34, 7, 1, 4, 3), nrow = 4, byrow = TRUE)
print(y)

# Al treilea rând și a doua coloană
element_1 <- y[3, 2]
print(paste("Elementul din al treilea rând și a doua coloană este:", element_1))

# Al doilea rând de y
rand_2 <- y[2,]
print(paste("Al doilea rând din y este:", paste(rand_2, collapse = ", ")))

# A patra coloană a lui y
coloana_4 <- y[, 4]
print(paste("A patra coloană a lui y este:", paste(coloana_4, collapse = ", ")))

# Matricea obținută după îndepărtarea primului rând și a celei de-a doua coloane
matrice_noua <- y[-1, -2]
print("Matricea obținută după îndepărtarea primului rând și a celei de-a doua coloane:")
print(matrice_noua)

# Exportarea matricei y într-un fișier .txt
fisier <- file("data_sar_6.txt", "w")
write.table(y, fisier, sep = "\t", row.names = FALSE, col.names = FALSE)
close(fisier)
#-------------------------------------------------------------------------

# Sarcina 7 --------------------------------------------------------------
cat("\n\nSarcina 7 -------------------------------------------------------\n")
# Instalați și încărcați pachetul ggplot2 dacă nu este deja instalat
if (!requireNamespace("ggplot2", quietly = TRUE)) {
  install.packages("ggplot2")
  library(ggplot2)
}
library(ggplot2)
# Funcția pentru citirea datelor și afișarea graficului
citire_si_grafic <- function(fisier) {
  # Citirea datelor din fișier
  date <- read.table(fisier, header = FALSE)
  
  # Atribuirea numelor coloanelor
  colnames(date) <- c("Coloana1", "Coloana2", "Coloana3", "Coloana4")
  
  # Crearea unui obiect ggplot cu multiple linii colorate
  grafic <- ggplot(data = date, aes(x = 1:nrow(date))) +
    geom_line(aes(y = Coloana1, color = "Coloana 1")) +
    geom_line(aes(y = Coloana2, color = "Coloana 2")) +
    geom_line(aes(y = Coloana3, color = "Coloana 3")) +
    geom_line(aes(y = Coloana4, color = "Coloana 4")) +
    labs(x = "x", y = "Valoare") +
    scale_color_manual(values = c("Coloana 1" = "red", "Coloana 2" = "blue", "Coloana 3" = "green", "Coloana 4" = "purple"))
  
  # Afișarea graficului
  print(grafic)
}

# Apelul funcției pentru fișierul data.txt
citire_si_grafic("data.txt")

#-------------------------------------------------------------------------

# Sarcina 8 --------------------------------------------------------------
cat("\n\nSarcina 8 -------------------------------------------------------\n")
# 1) Încărcarea datelor "airquality".
data(airquality)

# 2) Explicarea celor șase variabile.
# Variabilele sunt:
#   - Ozone: Concentrația de ozon în aer (în unități de 10 micrograme pe picior cub).
#   - Solar.R: Radiația solară în Langleys (unitate de măsură a radiației solare).
#   - Wind: Viteza vântului (în mile pe oră).
#   - Temp: Temperatura (în grade Fahrenheit).
#   - Month: Lună (1-12).
#   - Day: Zi (1-31).

# 3) Calcularea statisticilor principale.
cat("\n3) Calcularea statisticilor principale\n")
print(summary(airquality))

# 4) Calcularea separată a mediei, medianei și deviației standard a variabilei Temp.
cat("\n\n4) Calcularea separată a mediei, medianei și deviației standard a variabilei Temp.")
mean_temp <- mean(airquality$Temp)
median_temp <- median(airquality$Temp)
sd_temp <- sd(airquality$Temp)
cat("\nmedia = ",mean_temp)
cat("\nmediana = ",median_temp)
cat("\ndeviatia standart = ",sd_temp)

# 5) Calcularea varianței și scrierea unei funcții pentru deviația standard.
cat("\n\n5) Calcularea varianței și scrierea unei funcții pentru deviația standard.")
calcul_dev_standard <- function(vector) {
  dev_standard <- sqrt(var(vector))
  return(dev_standard)
}

variance_temp <- var(airquality$Temp)
dev_standard_temp <- calcul_dev_standard(airquality$Temp)
cat("\nvarianta = ",variance_temp)
cat("\ndeviația standard = ", dev_standard_temp)

cat("\n\n 6) Extras")
# 6) Extras:
#    a) A doua linie
    a_doua_linie <- airquality[2,]
    cat("\na doua linie: \n")
    print(a_doua_linie)

#    b) A treia coloană
    a_treia_coloana <- airquality[, 3]
    cat("\na treia coloană: \n")
    print(a_treia_coloana)

#    c) Liniile 1, 2 și 4 cu o singură comandă c ()
    liniile_124 <- airquality[c(1, 2, 4),]
    cat("\nliniile 1, 2 și 4 cu o singură comandă c (): \n")
    print(liniile_124)

#    d) Liniile 2-6 cu comanda ':'
    liniile_2_spre_6 <- airquality[2:6,]
    cat("\nliniile 2-6 cu comanda ':'\n")
    print(liniile_2_spre_6)

#    e) Toate, cu excepția coloanelor 1 și 2
    toate_exceptie_12 <- airquality[, - c(1, 2)]
    cat("\ntoate, cu excepția coloanelor 1 și 2 ':' = \n")
    print(toate_exceptie_12)

#    f) Toate liniile cu temperatura mai mare de 90°.
    temperatura_mai_mare_de_90 <- airquality[airquality$Temp > 90,]
    cat("\ntoate liniile cu temperatura mai mare de 90°: \n")
    print(temperatura_mai_mare_de_90)
#-------------------------------------------------------------------------
