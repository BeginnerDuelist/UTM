#Lucrarea de laborator nr.2 Buza Catalin TI-214
print("Ex.2_4:")
#Primul tip de formatare a sirurilor
a=float(input("Care este valoarea variabilei a ?"))
b=float(input("Care este valoarea variabilei b ?"))
print("Primul tip de formatare")
print("a+b=",round(a+b,2),"a-b=",round(a-b,2))
print("a*b=",round(a*b,2),"a:b=",round(a/b,2))
#round(float,2)-functia ce rotunjeste nr zecimal pina la 2 cifre dupa virgula
#Al doilea tip de formatare a sirurilor
print()
print("Al doilea tip de formatare")
print(f"a+b={round(a+b,2)},a-b={round(a-b,2)}")
print(f"a*b={round(a*b,2)},a:b={round(a/b,2)}")
#Al treilea tip de formatare
print()
print("Al treilea tip de formatare")
print("a+b={},a-b={}".format(round(a+b,2),round(a-b,2)))
print("a*b={},a:b={}".format(round(a*b,2),round(a/b,2)))
#Al patrulea tip de formatare
print()
print("Al patrulea tip de formatare")
print("a+b=%.2f,a-b=%.2f"%(a+b,a-b))
print("a*b=%.2f,a:b=%.2f"%(a*b,a/b))
