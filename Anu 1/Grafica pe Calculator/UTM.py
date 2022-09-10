from tkinter import *

window=Tk()
window.title("Sigla UTM")
panza=Canvas(window,height=400,width=1000)
panza.pack()
panza.create_rectangle(20,20,700,340,width=6)
panza.create_rectangle(40,40,60,300,fill='blue',outline='blue')
panza.create_rectangle(60,280,160,300,fill='blue',outline='blue')
panza.create_rectangle(160,40,180,300,fill='blue',outline='blue')

panza.create_rectangle(250,40,450,60,fill='yellow',outline='yellow')
panza.create_rectangle(340,60,360,300,fill='yellow',outline='yellow')

panza.create_rectangle(520,40,540,300,fill='red',outline='red')
panza.create_polygon(540,40,600,160,600,190,540,70,fill='red',outline='red')
panza.create_polygon(600,160,600,190,660,70,660,40,fill='red',outline='red')
panza.create_rectangle(660,40,680,300,fill='red',outline='red')
window.mainloop()