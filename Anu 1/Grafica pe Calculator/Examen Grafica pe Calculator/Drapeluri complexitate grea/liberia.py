from tkinter import *
import math as m

t = Tk()
t.title("Liberia")
t.geometry('600x600')

canvas = Canvas(
    t,
    height=600,
    width=600,
    bg='black'
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
    canvas.create_polygon(puncte, fill='white', outline='white')

for i in range(1, 11):
    if i % 2 != 0:
        color = 'red'
    else:
        color = 'white'
    canvas.create_rectangle(80, 50 + 10 * 2 * (i - 1), 480, 50 + 10 * 2 * i, fill=color, outline=color)

canvas.create_rectangle(80, 50, 180, 150, fill='blue', outline='blue')
star(130, 100, 40)

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Liberia', anchor=SE,
                   fill='white', font=('Arial', '48'))

t.mainloop()
