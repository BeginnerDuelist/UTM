import turtle as t
t.color("#EF3340")
t.speed(0)
t.pensize(1)
t.pu()
t.goto(-400,-200)
t.pd()


#triunghiul rosu din sting
t.begin_fill()
t.forward(345)
t.left(126.87)
t.forward(575)
t.left(143.13)
t.forward(460)
t.end_fill()

#triunghiul rosu din dreapta
t.begin_fill()
t.left(90)
t.forward(690)
t.left(90)
t.forward(460)
t.left(143.13)
t.forward(575)
t.right(53.13)
t.end_fill()

#triunghiul alb de jos
t.color("white")
t.right(53.13)
t.forward(225)
t.right(126.87)
t.forward(270)
t.right(126.87)
t.forward(225)
t.right(106.26)
t.forward(225)

#trapezul din centru albastru
t.color("#005EB8")
t.begin_fill()
t.forward(125)
t.right(126.87)
t.forward(420)
t.right(126.87)
t.forward(125)
t.right(53.13)
t.forward(270)
t.right(53.13)
t.forward(125)
t.end_fill()

#trapezul de sus negru
t.color("black")
t.begin_fill()
t.forward(225)
t.right(126.87)
t.forward(690)
t.right(126.87)
t.forward(225)
t.right(53.13)
t.forward(420)
t.end_fill()
t.right(180)
t.forward(135)

#cercul de la soare 
t.color("#FFD100")
t.begin_fill()
t.forward(150)
t.left(90)
t.circle(75, extent=180)
t.end_fill()
t.right(90)

#prima jumate de raza 
t.begin_fill()
t.forward(75)
t.right(170)                      
t.forward(78)
t.left(129)
#7 raze intregi
for i in range(7):
    t.forward(75)
    t.right(159)
    t.forward(76)
    t.left(140)
#a doua jumatate de raza
t.right(17.5)
t.forward(76)
t.right(168.5)
t.forward(250)
t.end_fill()

t.pu()
t.goto(-400,260)
t.pd()

t.color("brown")

t.begin_fill()
t.forward(30)
t.left(90)
t.forward(800)
t.left(90)
t.forward(30)
t.left(90)
t.forward(800)
t.end_fill()

t.pu()
t.color('black')
t.goto(-100,-400)
t.write("Antigua & Barduba", font=("Arial", 48, "normal"))

t.mainloop()