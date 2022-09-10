from tkinter import *

window=Tk()
window.title("Steagul Lituania TI-214 Buza Catalin")
panza=Canvas(window,width=500,height=500)
panza.pack()
panza.create_rectangle(20,20,40,380,fill='brown',outline='black')
panza.create_rectangle(40,20,350,90,fill='DarkGoldenrod3',outline='black')
panza.create_rectangle(40,90,350,160,fill='SpringGreen4',outline='black')
panza.create_rectangle(40,160,350,230,fill='brown4',outline='black')
window.mainloop()