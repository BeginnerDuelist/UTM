from tkinter import *

window=Tk()
window.title("Steagul Tailanda TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='black',outline='black')
panza.create_rectangle(40,20,350,50,fill='brown4',outline='brown4')
panza.create_rectangle(40,50,350,80,fill='white',outline='white')
panza.create_rectangle(40,80,350,140,fill='MidnightBlue',outline='midnightblue')
panza.create_rectangle(40,140,350,170,fill='white',outline='white')
panza.create_rectangle(40,170,350,200,fill='brown4',outline='brown4')

window.mainloop()