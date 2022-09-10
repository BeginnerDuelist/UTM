from tkinter import *
import math as m

t = Tk()
t.title("Surinam")
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
    canvas.create_polygon(puncte, fill='yellow', outline='yellow')

canvas.create_rectangle(80, 50, 480, 85, fill='green', outline='green')
canvas.create_rectangle(80, 85, 480, 100, fill='white', outline='white')
canvas.create_rectangle(80, 100, 480, 200, fill='red', outline='red')
canvas.create_rectangle(80, 200, 480, 215, fill='white', outline='white')
canvas.create_rectangle(80, 215, 480, 250, fill='green', outline='green')
star(280, 150, 30)

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Surinam', anchor=SE,
                   fill='white', font=('Arial', '48'))

t.mainloop()
