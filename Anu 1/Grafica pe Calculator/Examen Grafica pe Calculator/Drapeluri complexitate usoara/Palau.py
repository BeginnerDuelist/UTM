from tkinter import *

def create_circle(x, y, r, panza): 
    x0 = x - r
    y0 = y - r
    x1 = x + r
    y1 = y + r
    return panza.create_oval(x0, y0, x1, y1,fill='yellow',outline='yellow')

window=Tk()
window.title("Steagul Palau TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,220,fill='DodgerBlue',outline='black')
create_circle(165,120, 60, panza)
window.mainloop()