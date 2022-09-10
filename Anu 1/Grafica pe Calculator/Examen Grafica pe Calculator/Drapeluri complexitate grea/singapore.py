from turtle import *
import turtle as t

t.Screen().bgcolor("gray")

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

#stripes
color("#C73b3C")
begin_fill()
forward(400)
right(90)
forward(100)
right(90)
forward(400)
right(180)
end_fill()

color("white")
pu()
pd()
begin_fill()
forward(400)
right(90)
forward(100)
right(90)
forward(400)
right(180)
end_fill()

#moon
#white circle
penup()
goto(-130,6)
pendown()
color("white")
begin_fill()
circle(45)
end_fill()
#red circle
penup()
goto(-110,6)
pendown()
color("#C73b3C")
begin_fill()
circle(45)
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

star(-115,80,17,5,"white")
star(-140,60,17,5,"white")
star(-90,60,17,5,"white")
star(-130,30,17,5,"white")
star(-100,30,17,5,"white")

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
write("Singapore", font=("Arial", 48, "normal"))
t.done()
