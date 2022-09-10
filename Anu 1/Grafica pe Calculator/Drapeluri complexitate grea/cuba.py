from tkinter import *
import math as m

t = Tk()
t.title("Cuba")
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
    canvas.create_polygon(puncte, fill='white', outline='white')

canvas.create_rectangle(80, 50, 480, 90, fill='#004B87', outline='#004B87')
canvas.create_rectangle(80, 90, 480, 130, fill='white', outline='white')
canvas.create_rectangle(80, 130, 480, 170, fill='#004B87', outline='#004B87')
canvas.create_rectangle(80, 170, 480, 210, fill='white', outline='white')
canvas.create_rectangle(80, 210, 480, 250, fill='#004B87', outline='#004B87')
canvas.create_polygon(80, 50, 220, 150, 80, 250,
                      fill='#DA291C', outline='#DA291C')
star(130, 150, 30)

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Cuba', anchor=SE,
                   fill='white', font=('Arial', '48'))

t.mainloop()
