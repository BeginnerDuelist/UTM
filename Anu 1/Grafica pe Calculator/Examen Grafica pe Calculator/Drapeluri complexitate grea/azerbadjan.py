import pdb
from turtle import *
import turtle as t

#hideturtle()

speed(0)
penup()
goto(-200, 100)
pendown()

# blue background
color("#00B9E4")
begin_fill()
forward(400)
right(90)
forward(200 / 3)
right(90)
forward(400)
right(90)
forward(200 / 3)
end_fill()

#red background
color("#ED2939")
right(180)
forward(200 / 3)
left(90)
begin_fill()
forward(400)
right(90)
forward(200 / 3)
right(90)
forward(400)
right(90)
forward(200 / 3)
end_fill()

#green background
color("#3F9C35")
right(180)
forward(200 / 3)
left(90)
begin_fill()
forward(400)
right(90)
forward(200 / 3)
right(90)
forward(400)
right(90)
forward(200 / 3)
end_fill()

#semicerc
pu()
color('white')
goto(-3.33, -16.66)
forward(16.66)
pd()
begin_fill()
circle(30)
end_fill()
color("red")
pu()
right(90)
forward(3)
left(90)
pd()
begin_fill()
circle(26)
end_fill()

#stea

def star(X1,Y1,size,clr):
    t.goto(X1, Y1)
    t.color(clr)
    n = 4
    angle = 180 - 180 / n
    begin_fill()
    for i in range(2*n):
        forward(size)
        right(angle)
    end_fill()

star(3.33,-16.66, 33.33, 'white')

right(90)
penup()
left(180)
color("brown")
begin_fill()
goto(-200, 100)
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
write("Azerbadjan", font=("Arial", 48, "normal"))
t.done()
