from math import sqrt
from tkinter import *

t = Tk()
t.title("Jamaica")
t.geometry('600x600')

canvas = Canvas(
    t,
    height=600,
    width=600,
)

canvas.pack()

canvas.create_rectangle(80, 50, 480, 250, fill='#FED100', outline='#FED100')
canvas.create_polygon(113.33, 50, 280, 150 - 200 / 6 / 2 *
                      sqrt(2) + 6, 446.67, 50, fill='#009B3A', outline='#009B3A')
canvas.create_polygon(113.33, 250, 280, 150 + 200 / 6 / 2 *
                      sqrt(2) - 6, 446.67, 250, fill='#009B3A', outline='#009B3A')
canvas.create_polygon(80, 66.66, 280 - 200 / 6 / 2 * sqrt(2) + 2,
                      150, 80, 233.34, fill='black', outline='black')
canvas.create_polygon(480, 66.66, 280 + 200 / 6 / 2 * sqrt(2) - 2,
                      150, 480, 233.34, fill='black', outline='black')

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Jamaica', anchor=SE,
                   fill='black', font=('Arial', '48'))

t.mainloop()
