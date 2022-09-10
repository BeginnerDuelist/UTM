from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

#yellow rectangle
color("#FCD116")
begin_fill()
forward(400)
right(90)
forward(200)
right(90)
forward(400)
right(180)
end_fill()

#blue triangle
color("#0051BA")
begin_fill()
goto(-200,100)
goto(190,100)
goto(-200,-90)
end_fill()
#green triangle
color("#215B33")
penup()
goto(-190,-100)
pendown()
begin_fill()
goto(200,-100)
goto(200,90)
end_fill()

def star(X1, Y1, size, points, clr):
    penup()
    goto(X1,Y1)
    pendown()
    color(clr)
    begin_fill()
    for i in range(points):
        forward(size)
        right(180-180/points)
    end_fill()

star(-190,80,30,5,"white")
star(-130,80,30,5,"white")
star(-190,15,30,5,"white")
star(-130,15,30,5,"white")
star(-160,47,30,5,"white")

penup()
left(180)
color("brown")
begin_fill()
goto(-200,100)
pendown()
forward(30)
left(90)
forward(500)
left(90)
forward(30)
left(90)
forward(500)
end_fill()
penup()
color("black")
goto(-100, -300)
write("Insulele Solomon", font=("Arial", 32, "normal"))
t.done()
