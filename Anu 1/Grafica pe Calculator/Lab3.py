def factorial (n):
    facto=1
    for i in range(1,n+1):
        facto*=i
    return facto 

print("Laboratorul numarul 3")
print("Ex 3_4")
lista_mea=['Vera',['Ion','Vlad','Petru'],'Ana','Ala']
print("Trebuie de scris codul ca dupa rulare sa obtinem:a)Petru;b)['Ion','Vlad','Petru'];c)Ala")
print("\na)")
print(lista_mea[1][2])
print("\nb)")
print(lista_mea[1])
print("\nc)")
print(lista_mea[3])
print("\nLaborator nr.4")
print("Ex 4_4")
my_dict={'key 1':1, 'key 2':7, 'key 3':9}
lista=[]
for key,val in my_dict.items():
    if val>5:
        lista=lista+[val]
print(lista)
print("\nLaborator nr.5")
numar=int(input("Doriti sa determinati factorialul numarului:"))
factorialul_numarului=factorial(numar)
print(f'Factorialul lui {numar} este {factorialul_numarului}')
