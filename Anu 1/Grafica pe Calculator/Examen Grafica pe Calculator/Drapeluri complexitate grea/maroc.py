from tkinter import *
import math as m

t = Tk()
t.title("Maroc")
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
    canvas.create_polygon(puncte, fill='', outline='#006233', width=7)

canvas.create_rectangle(80, 50, 480, 250, fill='#c1272d', outline='#c1272d')

star(280, 150, 50)

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Maroc', anchor=SE,
                   fill='white', font=('Arial', '48'))

t.mainloop()
