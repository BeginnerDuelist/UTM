from tkinter import *
window=Tk()
window.title("Steagul Emiratele Arabe Unite Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,140,230,fill='red',outline='black')
panza.create_rectangle(140,20,350,90,fill='green',outline='black')
panza.create_rectangle(140,90,350,160,fill='white',outline='black')
panza.create_rectangle(140,160,350,230,fill='black')
window.mainloop()