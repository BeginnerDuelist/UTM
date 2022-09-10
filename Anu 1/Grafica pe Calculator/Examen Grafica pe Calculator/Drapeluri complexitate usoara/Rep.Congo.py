from tkinter import *

window=Tk()
window.title("Steagul Rep.Congo TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,220,fill='yellow',outline='black')
panza.create_polygon(40,20,240,20,40,220,fill='SpringGreen',outline='black')
panza.create_polygon(350,20,350,220,150,220,fill='red',outline='black')
window.mainloop()