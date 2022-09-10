from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

# red background
color("#DA291C")
begin_fill()
forward(400)
right(90)
forward(200)
right(90)
forward(400)
right(180)
end_fill()

#yellow rectangle
color("#FFC72C")
begin_fill()
goto(-200,100)
goto(0,0)
goto(-200,-100)
end_fill()

#black rectangle
color("black")
begin_fill()
goto(-200,100)
goto(-60,0)
goto(-200,-100)
end_fill()

#star
color("white")
penup()
goto(-175,0)
pendown()
left(20)
begin_fill()
for x in range(5):
    forward(50)
    right(144)
end_fill()
right(20)

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
write("Timorul de Est", font=("Arial", 48, "normal"))
t.done()
