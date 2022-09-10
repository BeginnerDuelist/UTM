from tkinter import *

window=Tk()
window.title("Steagul Columbia TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,360,fill='brown',outline='black')
panza.create_rectangle(40,20,330,110,fill='yellow',outline='black')
panza.create_rectangle(40,110,330,155,fill='blue',outline='black')
panza.create_rectangle(40,155,330,200,fill='red',outline='black')
window.mainloop()