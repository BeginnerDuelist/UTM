from tkinter import *
import math as m 
window=Tk()
window.title('Steagul Somalia Buza Catalin TI-214')
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown')
panza.create_rectangle(40,20,330,230,fill='DodgerBlue2',outline='black')
def creare_stea(centru_x,centru_y,r):
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
    panza.create_polygon(puncte,fill='white')
creare_stea(180,115,50)
window.mainloop()