from tkinter import *

window= Tk()
window.title("TI-214 Buza Catalin Steagul Mali")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,140,200,fill='green3',outline='black')
panza.create_rectangle(140,20,240,200,fill='yellow3',outline='black')
panza.create_rectangle(240,20,340,200,fill='red3',outline='black')
window.mainloop()