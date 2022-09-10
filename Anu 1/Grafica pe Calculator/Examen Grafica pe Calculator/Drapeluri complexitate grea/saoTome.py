from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

# green background
color("#12AD2B")
begin_fill()
forward(400)
right(90)
forward(56)
right(90)
forward(400)
right(180)
end_fill()

#yellow 
color("#FFCE00")
begin_fill()
forward(400)
right(90)
forward(86)
right(90)
forward(400)
right(180)
end_fill()

# green background
color("#12AD2B")
begin_fill()
forward(400)
right(90)
forward(56)
right(90)
forward(400)
right(180)
end_fill()


color("#D21034")
penup()
goto(-200,100)
pendown()
begin_fill()
goto(-100, 0)
goto(-200, -100)
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

star(-30,10,70,5,"black")
star(70,10,70,5,"black")

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
write("Sao Tome and Principe", font=("Arial", 32, "normal"))
t.done()
