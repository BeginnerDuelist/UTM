from tkinter import *
window=Tk()
window.title("Steagul Elvetiei Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,250,230,fill='red',outline='black')
panza.create_rectangle(125,50,145,200,fill='white')
panza.create_rectangle(70,115,210,135,fill='white')
window.mainloop()