from tkinter import *
import math as m

t = Tk()
t.title("Republica Democratica Congo")
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

canvas.create_rectangle(80, 50, 480, 250, fill='#FFD100', outline='#FFD100')
canvas.create_polygon(480, 50, 480, 100, 80, 250, 80, 200, fill='#EF3340', outline='#EF3340')
canvas.create_polygon(80, 50, 460, 50, 80, 190, fill='#0085CA', outline='#0085CA')
canvas.create_polygon(100, 250, 480, 250, 480, 110, fill='#0085CA', outline='#0085CA')
star(135, 100, 40)


canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Republica Democratica Congo', anchor=SE,
                   fill='white', font=('Arial', '24'))

t.mainloop()
