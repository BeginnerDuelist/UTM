from tkinter import *
import math as m
window=Tk()
window.title("Steagul Camerun Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
centru_x=190
centru_y=120
r=30

puncte=[
    #Coordonate punctu A
centru_x-int(r*m.sin(2*m.pi/5)),
centru_y-int(r*m.cos(2*m.pi/5)),
 #Coordonate punctu C
 centru_x+int(r*m.sin(2*m.pi/5)),
 centru_y-int(r*m.cos(2*m.pi/5)),
 #Coordonate punctu E
 centru_x-int(r*m.sin(2*m.pi/10)),
 centru_y+int(r*m.cos(2*m.pi/10)),
 #Coordonate punctu B
 centru_x,
 centru_y-r,
 #Coordonate punctu D
 centru_x+int(r*m.sin(2*m.pi/10)),
 centru_y+int(r*m.cos(2*m.pi/10)),
]
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,140,220,fill='Seagreen4',outline='black')
panza.create_rectangle(140,20,240,220,fill='red',outline='black')
panza.create_rectangle(240,20,340,220,fill='yellow1',outline='black')
panza.create_polygon(puncte,fill='yellow')
window.mainloop()