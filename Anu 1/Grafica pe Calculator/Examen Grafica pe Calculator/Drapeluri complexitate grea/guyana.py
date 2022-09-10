from tkinter import *
import math as m

t = Tk()
t.title("Guyana")
t.geometry('600x600')

canvas = Canvas(
    t,
    height=600,
    width=600,
    bg='gray'
)

canvas.pack()

canvas.create_rectangle(80, 50, 480, 250, fill='#009739', outline='#009739')
canvas.create_polygon(80, 50, 480, 150, 80, 250, fill='white', outline='white')
canvas.create_polygon(80, 60, 465, 150, 80, 240, fill='#FFD100', outline='#FFD100')
canvas.create_polygon(80, 50, 280, 150, 80, 250, fill='black', outline='black')
canvas.create_polygon(80, 60, 265, 150, 80, 240, fill='#EF3340', outline='#EF3340')

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Guyana', anchor=SE,
                   fill='black', font=('Arial', '48'))

t.mainloop()
