from tkinter import *

t = Tk()
t.title("Africa de Sud")
t.geometry('600x600')

canvas = Canvas(
  t,
  height=600,
  width=600,
  bg='gray'
)

canvas.pack()

canvas.create_rectangle(80, 50, 380, 250, fill='#007749', outline='#007749')
canvas.create_polygon(80, 69.98, 190.04, 150, 80, 230.02, fill='#FFB81C', outline='#FFB81C')
canvas.create_polygon(80, 83.01, 176.72, 150, 80, 216.7, fill='black', outline='black')
canvas.create_polygon(80 + 3.33 * 12, 50, 380, 50, 380, 50 + 24 * 3.33, 230, 50 + 24 * 3.33, fill='white', outline='white')
canvas.create_polygon(80 + 3.33 * 12, 250, 380, 250, 380, 250 - 24 * 3.33, 230, 250 - 24 * 3.33, fill='white', outline='white')
canvas.create_polygon(80 + 3.33 * 16, 250, 380, 250, 380, 250 - 20 * 3.33, 230, 250 - 20 * 3.33, fill='#001489', outline='#001489')
canvas.create_polygon(80 + 3.33 * 16, 50, 380, 50, 380, 50 + 20 * 3.33, 230, 50 + 20 * 3.33, fill='#E03C31', outline='#E03C31')


canvas.create_rectangle(50, 50, 80, 550, fill='brown', outline='black')
canvas.create_text(480, 550, text='Africa de Sud', anchor=SE, fill='black', font=('Arial', '48'))

t.mainloop()