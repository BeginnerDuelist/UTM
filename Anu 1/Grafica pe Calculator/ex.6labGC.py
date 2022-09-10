
fructele_mele=["Mere","Pere","Visine"]
lista_new=[]
f=open(r'C:\Users\Lenovo\Desktop\fructe.txt','r')
lista=list(f)
lista = [line.replace('\n','') for line in lista]
for i in fructele_mele:
    for j in lista:
        if i==j:
            lista_new=lista_new+[i]

print(lista_new)
f.close()


