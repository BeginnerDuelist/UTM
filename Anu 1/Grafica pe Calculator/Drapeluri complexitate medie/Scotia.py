from tkinter import *
import math as m
window=Tk()
window.title('Steagul Scotia Buza Catalin TI-214')
panza=Canvas(window,height=500,width=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,340,220,fill='white',outline='black')
panza.create_polygon(60,20,320,20,190,110,fill='blue',outline='black')
panza.create_polygon(60,220,320,220,190,140,fill='blue',outline='black')
panza.create_polygon(40,40,40,200,170,125,fill='blue',outline='black')
panza.create_polygon(340,40,340,200,210,125,fill='blue',outline='black')
window.mainloop()
