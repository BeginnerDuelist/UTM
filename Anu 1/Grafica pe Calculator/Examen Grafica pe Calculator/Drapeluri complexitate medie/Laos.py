from tkinter import *
def create_circle(x, y, r, panza): 
    x0 = x - r
    y0 = y - r
    x1 = x + r
    y1 = y + r
    return panza.create_oval(x0, y0, x1, y1,fill='white',outline='black')

window=Tk()
window.title("Steagul Laos Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown')
panza.create_rectangle(40,20,330,80,fill='red',outline='black')
panza.create_rectangle(40,80,330,170,fill='MidnightBlue',outline='black')
panza.create_rectangle(40,170,330,230,fill='red',outline='black')
create_circle(180,125,40, panza)
window.mainloop()