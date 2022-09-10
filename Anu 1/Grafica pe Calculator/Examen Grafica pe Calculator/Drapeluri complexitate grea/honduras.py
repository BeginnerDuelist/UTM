from tkinter import *
import math as m

t = Tk()
t.title("Honduras")
t.geometry('600x600')

canvas = Canvas(
    t,
    height=600,
    width=600,
    bg='black'
)

canvas.pack()

def star(centru_x, centru_y, r):
    puncte = [
        centru_x-int(r*m.sin(2*m.pi/5)),
        centru_y-int(r*m.cos(2*m.pi/5)),
        centru_x+int(r*m.sin(2*m.pi/5)),
        centru_y-int(r*m.cos(2*m.pi/5)),
        centru_x-int(r*m.sin(2*m.pi/10)),
        centru_y+int(r*m.cos(2*m.pi/10)),
        centru_x,
        centru_y-r,
        centru_x+int(r*m.sin(2*m.pi/10)),
        centru_y+int(r*m.cos(2*m.pi/10)),
    ]
    canvas.create_polygon(puncte, fill='#00bce4', outline='#00bce4')

canvas.create_rectangle(80, 50, 480, 116, fill='#00bce4', outline='#00bce4')
canvas.create_rectangle(80, 116, 480, 182, fill='white', outline='white')
canvas.create_rectangle(80, 182, 480, 250, fill='#00bce4', outline='#00bce4')

star(240, 135, 10)
star(240, 165, 10)
star(280, 150, 10)
star(320, 135, 10)
star(320, 165, 10)

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Honduras', anchor=SE,
                   fill='white', font=('Arial', '48'))

t.mainloop()
