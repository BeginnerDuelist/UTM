from tkinter import *
window=Tk()
window.title("Steagul Kuwait Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown')
panza.create_rectangle(40,20,330,90,fill='green',outline='black')
panza.create_rectangle(40,90,330,160,fill='white',outline='black')
panza.create_rectangle(40,160,330,230,fill='red',outline='black')
panza.create_polygon(40,20,150,90,150,160,40,230,fill='black')
window.mainloop()
