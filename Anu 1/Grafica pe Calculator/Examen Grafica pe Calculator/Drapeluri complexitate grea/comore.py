from tkinter import *
import math as m

t = Tk()
t.title("Comore")
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

canvas.create_rectangle(80, 50, 480, 100, fill='#FFD100', outline='#FFD100')
canvas.create_rectangle(80, 100, 480, 150, fill='white', outline='white')
canvas.create_rectangle(80, 150, 480, 200, fill='#EF3340', outline='#EF3340')
canvas.create_rectangle(80, 200, 480, 250, fill='#003DA5', outline='#003DA5')
canvas.create_polygon(80, 50, 280, 150, 80, 250,
                      fill='#009739', outline='#009739')
create_circle(138.22, 150, 48.28, 'white')
create_circle(156.68, 150, 46.86, '#009739')
for i in range(4):
    star(151.09, 118.76 + 19.98 * i, 9.9)

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Comore', anchor=SE,
                   fill='white', font=('Arial', '48'))

t.mainloop()