from tkinter import *
import math as m
window=Tk()
window.title('Steagul Sf.Vincent si Grenadine Buza Catalin TI-214')
panza=Canvas(window,height=500,width=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,115,230,fill='blue3',outline='black')
panza.create_rectangle(115,20,265,230,fill='yellow1',outline='black')
panza.create_rectangle(265,20,340,230,fill='green',outline='black')
def creare_romb(x,y,latura,color):
    puncte=[
     #Coordonate punctu A
     x,
     y-int(latura*m.sqrt(3)/2),
     #Coordonate punctu B
     x+int(latura/2),
     y,
     #Coordonate punctu C
     x,
     y+int(latura*m.sqrt(3)/2),
     #Coordonate punctu D
     x-(latura/2),
     y
    ]
    panza.create_polygon(puncte,fill=color)
creare_romb(170, 120,30, 'green')
creare_romb(210,120,30,'green')
creare_romb(190,148,30,'green')
window.mainloop()