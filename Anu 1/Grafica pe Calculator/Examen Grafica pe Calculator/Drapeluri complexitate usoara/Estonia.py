from tkinter import *

window=Tk()
window.title("Steagul Estonia TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,80,fill='DeepSkyBlue',outline='black')
panza.create_rectangle(40,80,350,140,fill='black',outline='black')
panza.create_rectangle(40,140,350,200,fill='white',outline='black')
window.mainloop()