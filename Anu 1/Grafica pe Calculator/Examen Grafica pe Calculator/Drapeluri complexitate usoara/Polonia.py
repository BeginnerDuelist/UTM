from tkinter import *

window=Tk()
window.title("Steagul Ucraina TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,200,fill='white',outline='white')
panza.create_rectangle(40,110,350,200,fill='red2',outline='red2')

window.mainloop()