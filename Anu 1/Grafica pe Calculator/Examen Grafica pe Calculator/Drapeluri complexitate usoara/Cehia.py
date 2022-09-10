from tkinter import *

window=Tk()
window.title("Drapelul Cehia Buza Catalin TI-214")
panza=Canvas(window,height=500,width=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_polygon(40,20,220,100,40,180,fill='DodgerBlue4',outline='black')
panza.create_polygon(40,20,350,20,350,100,220,100,fill='white',outline='black')
panza.create_polygon(220,100,350,100,350,180,40,180,fill='red2',outline='black')

window.mainloop()