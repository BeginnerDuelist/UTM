from tkinter import *

window=Tk()
window.title("Stegaul Mauritius Buza Catalin TI-214")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,60,fill='red',outline='black')
panza.create_rectangle(40,60,350,100,fill='blue',outline='black')
panza.create_rectangle(40,100,350,140,fill='yellow',outline='black')
panza.create_rectangle(40,140,350,180,fill='green',outline='black')
panza.create_text(300,400,text='Steagul Mauritius TI-214 Buza Catalin',font=('Arial','14'))
window.mainloop()