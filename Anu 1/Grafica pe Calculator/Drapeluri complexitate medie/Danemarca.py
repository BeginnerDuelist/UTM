from tkinter import *
window=Tk()
window.title("Steagul Danemarca Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,330,220,fill='red',outline='black')
panza.create_rectangle(120,20,140,220,fill='white')
panza.create_rectangle(40,110,330,130,fill='white')

window.mainloop()