from turtle import*
import turtle as t

hideturtle()
Screen().bgcolor("gray")

# Palestinian flag
speed(0)
penup()
goto(-200,100)
pendown()

#black rectangle
color("black")
begin_fill()
forward(400)
right(90)
forward(66.6)
right(90)
forward(400)
right(180)
end_fill()

#white rectangle
color("white")
begin_fill()
forward(400)
right(90)
forward(66.6)
right(90)
forward(400)
right(180)
end_fill()

#green rectangle
color("#007A3D")
begin_fill()
forward(400)
right(90)
forward(66.6)
right(90)
forward(400)
right(180)
end_fill()

#red triangle
color("#CE1126")
penup()
goto(-200,100)
pendown()
begin_fill()
goto(-20,0)
goto(-200,-100)
end_fill()

def star(X1,Y1,size,points,clr):
    goto(X1,Y1)
    color(clr)
    begin_fill()
    for i in range(points):
        forward(size)
        left(180-180/points)
    end_fill()

star(-150,0,30,7,"white")
color("#CE1126")

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
write("Iordania", font=("Arial", 48, "normal"))
t.done()
