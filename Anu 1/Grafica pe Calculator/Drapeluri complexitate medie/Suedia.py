from tkinter import *
window=Tk()
window.title("Steagul Suedia Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown')
panza.create_rectangle(40,20,330,230,fill='DeepSkyBlue3')
panza.create_rectangle(140,20,170,230,fill='yellow1',outline='yellow1')
panza.create_rectangle(40,110,330,140,fill='yellow1',outline='yellow1')

window.mainloop()