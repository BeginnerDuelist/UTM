from tkinter import *

window=Tk()
window.title("Steagul Letonia TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()

panza.create_rectangle(20,20,40,380,fill='black',outline='black')
panza.create_rectangle(40,20,350,200,fill='red4',outline='red4')
panza.create_rectangle(40,90,350,130,fill='white',outline='white')

window.mainloop()