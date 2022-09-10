from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

#black rectangle
color("black")
begin_fill()
forward(400)
right(90)
forward(200)
right(90)
forward(400)
right(180)
end_fill()

#top yellow rectangle
color("#FFD100")
begin_fill()
goto(-200,100)
goto(130,100)
goto(-200,-50)
end_fill()

#green rectangel
color("#009739")
begin_fill()
goto(-200, 100)
goto(110, 100)
goto(-200, -40)
end_fill()

#bottom yellow rectangle
color("#FFD100")
penup()
goto(-130,-100)
pendown()
begin_fill()
goto(200,-100)
goto(200,50)
end_fill()

#red rectangle
color("#EF3340")
penup()
goto(-110,-100)
pendown()
begin_fill()
goto(200,-100)
goto(200,40)
end_fill()

def star(X1, Y1, size, points, clr):
    penup()
    goto(X1,Y1)
    pendown()
    color(clr)
    begin_fill()
    for i in range(points):
        forward(size)
        left(180-180/points)
    end_fill()

right(10)
star(60,35,60,5,"white")
left(10)

right(10)
star(-110,-43,60,5,"white")
left(10)


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
write("Sf. Kitts & Nevis", font=("Arial", 32, "normal"))
t.done()
