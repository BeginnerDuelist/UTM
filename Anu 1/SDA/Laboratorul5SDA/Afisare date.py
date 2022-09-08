import matplotlib.pyplot as plt

elemente=[100,1000,10000,100000]
bublesort=[]
mergesort=[]
file=open(r'C:\Users\Lenovo\Desktop\Laboratorul5SDA\Rezultate sortari.txt')
data=file.readlines()

bublesort = data[0].split()
mergesort = data[1].split()

plt.figure(figsize=(10,5))
plt.plot(elemente,mergesort,'g',label='Merge Sort')
plt.plot(elemente,bublesort,'r',label='Bubble Sort')
plt.legend()
plt.title('Bubble Sort vs Merge Sort')
plt.xlabel('Numarul de elemente N')
plt.ylabel('Timpul de sortare in secunde')
plt.show()
file.close()

liniar_search=[]
binary_search=[]
file=open(r'C:\Users\Lenovo\Desktop\Laboratorul5SDA\Rezultate cautarii.txt')
data1=file.readlines()

liniar_search = data1[0].split()
binary_search = data1[1].split()

plt.figure(figsize=(10,5))
plt.plot(elemente,binary_search,'b',label='Binary Search')
plt.plot(elemente,liniar_search,'r',label='Liniar Search')
plt.legend()
plt.title('Liniar Search  vs Binary Search')
plt.xlabel('Numarul de elemente N')
plt.ylabel('Timpul de cautare in secunde')
plt.show()
file.close()
