from tkinter import *
window=Tk()
window.title("Steagul Finlanda Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,330,220,fill='white',outline='black')
panza.create_rectangle(120,20,150,220,fill='blue')
panza.create_rectangle(40,105,330,135,fill='blue')
window.mainloop()