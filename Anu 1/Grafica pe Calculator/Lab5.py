#Lucrare de laboratoe nr.5 Buza Catalin TI-214
def factorial (n):
    facto=1
    for i in range(1,n+1):
        facto*=i
    return facto    
print("Laboratorul nr.5")
numar=int(input("Doriti sa determinati factorialul numarului:"))
factorialul_numarului=factorial(numar)
print(f'Factorialul lui {numar} este {factorialul_numarului}')