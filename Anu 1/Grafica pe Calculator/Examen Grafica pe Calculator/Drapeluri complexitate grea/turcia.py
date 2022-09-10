from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

# red background
color("#C8102E")
begin_fill()
forward(400)
right(90)
forward(200)
right(90)
forward(400)
right(180)
end_fill()

# moon
#red circle
goto(-77.5,-60)
color("white")
begin_fill()
circle(65)
end_fill()
#white circle 
goto(-60.5,-48)
color("#C8102E")
begin_fill()
circle(52.5)
end_fill()

#star
color("white")
penup()
goto(-30,0)
pendown()
left(20)
begin_fill()
for x in range(5):
    forward(45.5)
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
goto(0, -300)
write("Turcia", font=("Arial", 48, "normal"))
t.done()
