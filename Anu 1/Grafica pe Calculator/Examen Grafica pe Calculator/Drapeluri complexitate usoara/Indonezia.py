from tkinter import *

window=Tk()
window.title("Steagul Indonezia TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,120,fill='red',outline='black')
panza.create_rectangle(40,120,350,220,fill='white',outline='black')

window.mainloop()