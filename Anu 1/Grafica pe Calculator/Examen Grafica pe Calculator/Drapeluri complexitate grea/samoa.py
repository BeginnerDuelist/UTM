from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

# red background
color("#CE1126")
begin_fill()
forward(400)
right(90)
forward(200)
right(90)
forward(400)
right(180)
end_fill()

#blue rectangle
penup()
goto(-200,100)
pendown()
color("#002B7F")
begin_fill()
forward(200)
right(90)
forward(100)
right(90)
forward(200)
right(180)
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

star(-120,20,28,5,"white")
star(-116,87,20,5,"white")
star(-145,65,20,5,"white")
star(-87,65,20,5,"white")
star(-100,45,12,5,"white")

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
write("Samoa", font=("Arial", 48, "normal"))
done()