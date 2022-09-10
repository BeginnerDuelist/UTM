from tkinter import *

t = Tk()
t.title("Maldive")
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

canvas.create_rectangle(80, 50, 480, 250, fill='#C8102E', outline='#C8102E')
canvas.create_rectangle(130, 100, 430, 200, fill='#00843D', outline='#00843D')

create_circle(280, 150, 40, 'white')
create_circle(295, 150, 40, '#00843D')

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Maldive', anchor=SE,
                   fill='black', font=('Arial', '48'))

t.mainloop()
