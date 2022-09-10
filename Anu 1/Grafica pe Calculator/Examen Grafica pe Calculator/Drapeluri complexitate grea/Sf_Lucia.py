from tkinter import *

t = Tk()
t.title("Sf. Lucia")
t.geometry('600x600')

canvas = Canvas(
  t,
  height=600,
  width=600,
  bg='#fff'
)

canvas.pack()

canvas.create_rectangle(80, 50, 480, 250, fill='#66CCFF', outline='#66CCFF')
canvas.create_polygon(230, 230, 280, 75, 330, 230, fill='white', outline='white')
canvas.create_polygon(240, 230, 280, 100, 320, 230, fill='black', outline='black')
canvas.create_polygon(230, 230, 280, 150, 330, 230, fill='#FCD116', outline='#FCD116')

canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Sf. Lucia', anchor=SE, fill='black', font=('Arial', '48'))

t.mainloop()