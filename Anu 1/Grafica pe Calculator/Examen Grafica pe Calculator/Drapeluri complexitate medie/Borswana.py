from tkinter import *

window=Tk()
window.title("Steagul Borswana Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,330,230,fill='CadetBlue',outline='black')
panza.create_rectangle(40,105,330,115,fill='white',outline='black')
panza.create_rectangle(40,115,330,135,fill='black',outline='black')
panza.create_rectangle(40,135,330,145,fill='white',outline='black')

window.mainloop()