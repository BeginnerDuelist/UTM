from tkinter import *

window=Tk()
window.title("Steagul Ungaria TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,90,fill='brown3',outline='black')
panza.create_rectangle(40,90,350,160,fill='white',outline='black')
panza.create_rectangle(40,160,350,230,fill='SeaGreen',outline='black')
window.mainloop()