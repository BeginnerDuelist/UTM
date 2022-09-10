from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

#red rectangle
color("#D22730")
begin_fill()
forward(400)
right(90)
forward(200)
right(90)
forward(400)
right(180)
end_fill()

#yellow triangle
color("#FED141")
begin_fill()
goto(-200,100)
goto(50,100)
goto(-200,-100)
end_fill()

#blue triangle
color("#002F6C")
begin_fill()
goto(-200,100)
goto(-70,100)
goto(-200,-100)
end_fill()

#white triangle 
color("white")
begin_fill()
goto(200,-100)
goto(200,20)
goto(-200,-100)
end_fill()

#white triangle 
color("#007A33")
begin_fill()
goto(200,-100)
goto(200,-40)
goto(-200,-100)
end_fill()
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
write("Seychelles", font=("Arial", 48, "normal"))
t.done()
