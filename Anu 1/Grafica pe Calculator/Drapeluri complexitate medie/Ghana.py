from tkinter import *
import math as m
window=Tk()
window.title("Steagul Ghana Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
centru_x=175
centru_y=125
r=28
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
panza.create_rectangle(40,20,330,90,fill='red',outline='black')
panza.create_rectangle(40,90,330,160,fill='yellow',outline='black')
panza.create_rectangle(40,160,330,230,fill='green',outline='black')

panza.create_polygon(puncte,fill='black')
window.mainloop()