from tkinter import *

window=Tk()
window.title("Steagul Benin Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,200,220,fill='SpringGreen3',outline='black')
panza.create_rectangle(200,20,400,120,fill='yellow',outline='black')
panza.create_rectangle(200,120,400,220,fill='red',outline='black')
window.mainloop()