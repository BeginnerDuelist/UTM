from tkinter import *

window=Tk()
window.title("Steagul Austria TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,90,fill='red',outline='black')
panza.create_rectangle(40,90,350,160,fill='white',outline='black')
panza.create_rectangle(40,160,350,230,fill='red',outline='black')
window.mainloop()