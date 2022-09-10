from tkinter import *

window=Tk()
window.title('Steagul Tanzania TI-214 Buza Catalin')
panza=Canvas(window,height=500,width=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_polygon(40,20,290,20,40,190,fill='green',outline='black')
panza.create_polygon(40,190,290,20,315,20,40,210,fill='yellow')
panza.create_polygon(315,20,340,20,340,40,65,230,40,230,40,210,fill='black')
panza.create_polygon(65,230,340,40,340,60,95,230,fill='yellow')
panza.create_polygon(340,60,340,230,95,230,fill='cyan2')

window.mainloop()