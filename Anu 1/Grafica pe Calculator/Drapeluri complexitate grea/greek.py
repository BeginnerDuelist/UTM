from tkinter import *

t = Tk()
t.title("Grecia")
t.geometry('600x600')

canvas = Canvas(
    t,
    height=600,
    width=600,
    bg='black'
)

canvas.pack()

for i in range(1, 10):
    if i % 2 == 0:
        color = 'white'
    else:
        color = '#001489'
    canvas.create_rectangle(80, 50 + 12.5 * 2 * (i - 1), 480, 50 + 12.5 * 2 * i, fill=color, outline=color)
canvas.create_rectangle(80, 50, 212, 150, fill='#001489', outline='#001489')
canvas.create_rectangle(80 + 12.5 * 4, 50, 80 + 12.5 * 6, 177.22, fill='white', outline='white')
canvas.create_rectangle(80, 50 + 12.5 * 4, 212, 50 + 12.5 * 6, fill='white', outline='white')

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Grecia', anchor=SE,
                   fill='white', font=('Arial', '48'))

t.mainloop()
