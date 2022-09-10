from tkinter import *

def creare_triunghi(x0,y0,x,y,x1,y1,color):
    return panza.create_polygon(x0,y0,x,y,x1,y1,fill=color)
    

window=Tk()
window.title("Steagul Bahrain Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown')
panza.create_rectangle(40,20,100,220,fill='white')
panza.create_rectangle(100,20,330,220,fill='red')
creare_triunghi(100,20,130,40,100,60,'white')
creare_triunghi(100,60,130,80,100,100,'white')
creare_triunghi(100,100,130,120,100,140,'white')
creare_triunghi(100,140,130,160,100,180,'white')
creare_triunghi(100,180,130,200,100,220,'white')
window.mainloop()
