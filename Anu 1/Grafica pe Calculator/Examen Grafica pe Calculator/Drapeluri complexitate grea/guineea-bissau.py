from tkinter import *
import math as m

t = Tk()
t.title("Guineea-Bissau")
t.geometry('600x600')

canvas = Canvas(
    t,
    height=600,
    width=600,
)

canvas.pack()

def create_circle(x, y, r, color):
    x0 = x - r
    y0 = y - r
    x1 = x + r
    y1 = y + r
    canvas.create_oval(x0, y0, x1, y1, fill=color, outline=color)

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
    canvas.create_polygon(puncte, fill='black', outline='black')

canvas.create_rectangle(80, 50, 480, 150, fill='#FFD100', outline='#FFD100')
canvas.create_rectangle(80, 150, 480, 250, fill='#009739', outline='#009739')
canvas.create_rectangle(80, 50, 180, 250, fill='#EF3340', outline='#EF3340')
star(130, 150, 40)

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Guineea-Bissau', anchor=SE,
                   fill='black', font=('Arial', '48'))

t.mainloop()
