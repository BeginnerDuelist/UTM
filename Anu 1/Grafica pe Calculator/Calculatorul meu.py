from tkinter import *
from tkinter import messagebox # mesaje
from tkinter import ttk #butoane

window=Tk()
window.title('Calculator')
butoane_calc=[
            "**(1/2)","(",")","**(1/","**", #**(1/2)-radical de ordinul 2
            "7","8","9","+","-",            #**(1/-radical de ordinul n
            "4","5","6","*","/",            #** x la puterea y
            "1","2","3","-/+","1/",         #1/ --1/x=inversul lui x
            "0",".","DELETE","=","**2"      #**2-ridicarea la patrat
]
      
r=1
c=0
calc_txt=Entry(window,width=25)
calc_txt.grid(row=0,column=0,columnspan=5)
def calc(key):
    global memory
    if key == "=":
        str1="**.+-()*/0123456789"
        if calc_txt.get() [0] not in str1:
            calc_txt.insert(END,"Nu este cifra")
            messagebox.showerror("ERROR!!!Not Number")
        try:
            rezultat=eval(calc_txt.get())
            calc_txt.insert(END,"=" + str(rezultat))
        except:
            calc_txt.insert(END,"ERROR!!!")
            messagebox.showerror("Verifica valorile introduse")
    elif key =="DELETE":
        calc_txt.delete(0,END)
    elif key=="-/+":
        if "=" in calc_txt.get():
            calc_txt.delete(0,END)
        try:
            if calc_txt.get()[0]=="-":
                calc_txt.delete(0)
            else:
                calc_txt.insert(0,"-")
        except IndexError:
            pass
    else:
        if "=" in calc_txt.get():
            calc_txt.delete(0,END)
        calc_txt.insert(END,key)

for i in butoane_calc:
    rel=""
    cmd=lambda x=i:calc(x)
    ttk.Button(window,text=i,command=cmd).grid(row=r,column=c)
    c+=1
    if c>4:
        c=0
        r+=1
        
window.mainloop()