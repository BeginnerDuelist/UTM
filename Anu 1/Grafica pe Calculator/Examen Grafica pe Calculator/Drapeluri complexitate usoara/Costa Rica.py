from tkinter import *

window=Tk()
window.title("Steagul Costa Rica TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,320,40,fill='blue4',outline='black')
panza.create_rectangle(40,40,320,60,fill='white',outline='black')
panza.create_rectangle(40,60,320,110,fill='red',outline='black')
panza.create_rectangle(40,110,320,130,fill='white',outline='black')
panza.create_rectangle(40,130,320,150,fill='blue4',outline='black')

window.mainloop()