import pdb
from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

#green
color("#009A44")
begin_fill()
forward(400)
right(90)
forward(66.6)
right(90)
forward(400)
right(180)
end_fill()

#yellow
color("#FEDD00")
begin_fill()
forward(400)
right(90)
forward(66.6)
right(90)
forward(400)
right(180)
end_fill()

#red 
color("#EF3340")
begin_fill()
forward(400)
right(90)
forward(66.6)
right(90)
forward(400)
right(180)
end_fill()

#circle
penup()
goto(0,-60)
pendown()
color("#0645B1")
begin_fill()
circle(60)
end_fill()

#yellow lines
pensize(3)
color("#FEDD00")
right(90)
for i in range(5):
    penup()
    goto(0,0)
    pendown()
    forward(50)
    right(72)
left(90)
pensize(1)


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


#blue star 
star(-50,13,100,5,"#0645B1")
#yellow star
pensize(3)
penup()
goto(-40,10)
pendown()
color("#FEDD00")
for i in range(5):
    forward(80)
    right(180-180/5)
pensize(1)

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
goto(0, -300)
write("Ethiopia", font=("Arial", 48, "normal"))
t.done()
