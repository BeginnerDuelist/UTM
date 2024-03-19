cat("\n\nSarcina 1 -------------------------------------------------------\n")
# Exemplu de creare a data frame A
A <- data.frame(Ident = 1:5, sexe = c("H", "F", "F", "H", "H"), Poids = c(75, 68, 48, 72, 83))

# Exemplu de creare a data frame B
B <- data.frame(Ident = 1:5, sexe = c("H", "F", "F", "H", "H"), Tails = c(182, 165, 160, 178, 183))

# Combinați data frames A și B pe baza coloanei "Ident" și "sexe"
C <- merge(A, B, by = c("Ident", "sexe"))

# Redenumiți coloanele pentru a corespunde cerințelor dvs.
names(C) <- c("Ident", "sexe", "Poids", "Taille")

# Afișarea rezultatului
print(C)

cat("\n\nSarcina 2 -------------------------------------------------------\n")
x <- c(0.2, 0.6, 2.1, 3.7, 2.8, 2.7, 1.9, 2.3, 5.9)

rezultat <- x[x >= 2 & x <= 3]

print(rezultat)

cat("\n\nSarcina 3 -------------------------------------------------------\n")
# Specificați valorile matricei
valori <- matrix(c(1, 0, 3, 4, 6, 6, 0, 4, 5, 6, 2, 3, 0, 1, 2, 4), nrow = 4, byrow = TRUE)

# Specificați numele rândurilor și coloanelor
nume_randuri <- c("row-1", "row-2", "row-3", "row-4")
nume_coloane <- c("column 1", "column 2", "column 3", "column 4")

# Creați matricea Y cu numele rândurilor și coloanelor
Y <- matrix(valori, nrow = 4, byrow = TRUE, dimnames = list(nume_randuri, nume_coloane))

# Afișați matricea Y
print(Y)
det_matrice <- det(Y)
cat("Determinantul matricei Y este:", det_matrice, "\n")

# Calculați inversa matricei (dacă determinantul este diferit de zero)
if (det_matrice != 0) {
    matrice_inversa <- solve(Y)
    print("Matricea inversa:")
    print(matrice_inversa)
} else {
    cat("Matricea nu are o inversă deoarece determinantul este zero.")
}
cat("\n\nSarcina 4 -------------------------------------------------------\n")
cat("\na)")
# Încărcați pachetul "datasets" pentru a avea acces la setul de date "Orange"
library(datasets)
# Încărcați setul de date "Orange"
data("Orange")
# Selectați ultimele două variabile din setul de date
ultimele_doua_variabile <- Orange[, c("circumference", "age")]
# Calculați media
media <- colMeans(ultimele_doua_variabile)
# Calculați abaterea standard
std_dev <- apply(ultimele_doua_variabile, 2, sd)
# Calculați minimul și maximul pentru fiecare variabilă
minim <- apply(ultimele_doua_variabile, 2, min)
maxim <- apply(ultimele_doua_variabile, 2, max)
# Afișați rezultatele
print(media)
print(std_dev)
print(minim)
print(maxim)
cat("\nb)")
# Calculați quartilele pentru fiecare variabilă
quartile_circumference <- quantile(ultimele_doua_variabile$circumference, probs = c(0.25, 0.5, 0.75))
quartile_age <- quantile(ultimele_doua_variabile$age, probs = c(0.25, 0.5, 0.75))
# Afișați rezultatele
print(quartile_circumference)
print(quartile_age)
cat("\nc)")
# Calculați toate decilele pentru fiecare variabilă
# Definește funcția pentru calculul decilelor
calculeaza_decile <- function(x) {
    quantile(x, probs = seq(0.1, 0.9, by = 0.1))
}
# Aplică funcția pe ambele variabile folosind apply
decile_circumference <- apply(ultimele_doua_variabile, 2, calculeaza_decile)
# Afișează rezultatele pentru circumferință (c) și vârstă (a)
print("Decile pentru circumferință:")
print(decile_circumference)

cat("\n\nSarcina 5 -------------------------------------------------------\n")
cat("\na)")
# Folosind operatorul de replicare
k <- c(8, 2, 6)
k <- rep(k, times = 3)

# Afișați vectorul k
print(k)
cat("\nb)")
# Metoda 1: Folosind funcția c()
w1 <- c(rep(4, times = 7), rep(9, times = 5), rep(2, times = 3))

# Metoda 2: Folosind funcția append()
w2 <- append(append(rep(4, times = 7), rep(9, times = 5)), rep(2, times = 3))

# Afișați vectorii w obținuți prin ambele metode
print(w1)
print(w2)

cat("\n\nSarcina 6 -------------------------------------------------------\n")
cat("\na)")
size <- c(178, 175, 160, 191, 176, 155, 163, 174, 182)
cat("\nb)")
size_1 <- c(164, 172, 156, 195, 166)
cat("\nc)")
new.size <- c(rep(size_1, times = 2), tail(size, n = 7)) # nolint
write.csv(new.size, file = "new_size.csv")

cat("\n\nSarcina 7 -------------------------------------------------------\n")
cat("\na)\n")
# Încărcați setul de date "iris"
data(iris)
# Afișați primele 7 linii din setul de date
head(iris, 7)

# Creați un subset "new.iris" care conține doar datele pentru "versicolor"
new.iris <- subset(iris, Species == "versicolor")

# Afișați primele 7 linii din noul set de date "new.iris"
print(head(new.iris, 7))

cat("\nb)\n")
# Sortați "new.iris" în ordine descrescătoare după "Sepal.Length"
new.iris <- new.iris[order(-new.iris$Sepal.Length),]
# Afișați "new.iris" după sortare
print(head(new.iris))



cat("\n\nSarcina 8 -------------------------------------------------------\n")
# Definiți matricea A ca o matrice de caractere
A <- matrix(c("8", "16", "9", "2"), nrow = 2, ncol = 2)

# Convertiți matricea A la matrice numerică
A_numeric <- as.numeric(A)

# Afișați matricea numerică rezultată
print(A_numeric)

cat("\n\nSarcina 9 -------------------------------------------------------\n")
# Creați cadru de date "person"
person <- data.frame(
    height = c(160, 180, 175),
    weight = c(52, 96, 60),
    age = c(18, 43, 29),
    c.eyes = c("green", "blue", "blue")
)
# 1) Schimbați numele coloanei 3 cu „new.age”
colnames(person)[3] <- "new.age"
print(person)
# 2) Schimbați numele liniei 2 cu „Mary”
rownames(person)[2] <- "Mary"
print(person)
# 3) Ștergeți numele rândurilor
rownames(person) <- NULL
print(person)
# 4) Schimbați toate numele coloanelor cu a, b, c, d
colnames(person) <- c("a", "b", "c", "d")
print(person)
# 5) Extrageți elementul rândului 1 și al coloanei 3
element_1_3 <- person[1, 3]
print(element_1_3)
# 6) Extrageți variabila 2 (rezultat în data.frame , rezultat în vector)
variable_2_df <- person[, 2]
variable_2_vector <- person[, 2]
print(variable_2_df)
print(variable_2_vector)
# 7) Extrageți elementul 1 și 3 al variabilei 3
elements_1_and_3_var_3 <- person[c(1, 3), "c"]
print(elements_1_and_3_var_3)
# 8) Extrageți valorile 160 superioare și 180 inferioare ale variabilei „height”.
height_above_160_below_180 <- person$height[(person$height > 160) & (person$height < 180)]
print(height_above_160_below_180)
# 9) Extrageți valorile greutății persoanelor ale căror valori de înălțime sunt mai mari de 170
weights_above_170 <- person$weight[person$height > 170]
print(weights_above_170)
# 10) Extrageți toate persoanele care au o greutate mai mare de 52 kg
persons_weight_above_52 <- person[person$weight > 52, ]
print(persons_weight_above_52)

# 11) Schimbați înălțimea primelor 2 persoane la 190 și 158
person[1:2, "a"] <- c(190, 158)

print(person)

cat("\n\nSarcina 10 -------------------------------------------------------\n")
# Crearea listei "my_list"
my_list <- list(
    list(5),
    c(160, 180, 175),
    matrix(1:12, nrow = 4, ncol = 3),
    data.frame(
        height = c(160, 180, 175),
        weight = c(52, 96, 60),
        age = c(18, 43, 29),
        c.eyes = c("green", "blue", "blue")
    )
)

# 1) Darea de nume elementelor listei
print("1)")
names(my_list) <- c("element1", "element2", "element3", "element4")
print(my_list)
# 2) Extrageți al doilea element al listei (rezultat în vector, rezultat în listă)
print("2)")
al_doilea_element_vector <- my_list[[2]]
al_doilea_element_lista <- list(my_list[[2]])

print(al_doilea_element_vector)
print(al_doilea_element_lista)

# 3) Extrageți primul și al treilea element din listă
print("3)")
primul_al_3_elemente <- my_list[c("element1", "element3")]
print(primul_al_3_elemente)

print("4)")
# 4) Extrageți al treilea element din a doua coloană a celui de-al patrulea compartiment
al_treilea_element_coloana2 <- my_list$element4[[2]][3]
print(al_treilea_element_coloana2)


