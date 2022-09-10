from tkinter import *
import math as m

t = Tk()
t.title("Djibouti")
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
    canvas.create_polygon(puncte, fill='#D7141A', outline='#D7141A')

canvas.create_rectangle(80, 50, 480, 150, fill='#6AB2E7', outline='#6AB2E7')
canvas.create_rectangle(80, 150, 480, 250, fill='#12AD2B', outline='#12AD2B')
canvas.create_polygon(80, 50, 280, 150, 80, 250,
                      fill='white', outline='white')
star(150, 150, 30)

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Djibouti', anchor=SE,
                   fill='white', font=('Arial', '48'))

t.mainloop()
