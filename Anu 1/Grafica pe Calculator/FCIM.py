from tkinter import *

window=Tk()
window.title(" Sigla FCIM ")
panza=Canvas(window,height=500,width=1000)
panza.pack()
panza.create_rectangle(40,40,710,380)
panza.create_rectangle(60,60,90,350,fill='blue3',outline='blue3')
panza.create_rectangle(90,60,220,90,fill='blue3',outline='blue3')
panza.create_rectangle(90,180,180,210,fill='blue3',outline='blue3')

panza.create_arc(250,60,470,350,start=80,extent=210,style=ARC,width=20,outline='blue3')

panza.create_rectangle(460,60,490,350,fill='blue3',outline='blue3')

panza.create_rectangle(520,60,550,350,fill='red',outline='red')
panza.create_polygon(550,60,600,160,600,200,540,90,fill='red',outline='red')
panza.create_polygon(600,160,600,200,660,100,660,60,fill='red',outline='red')
panza.create_rectangle(660,60,690,350,fill='red',outline='red')
window.mainloop()