from turtle import *
import turtle as t

hideturtle()
Screen().bgcolor("gray")

speed(0)
penup()
goto(-200,100)
pendown()

#1 white stripe
color("white")
begin_fill()
forward(400)
right(90)
forward(18)
right(90)
forward(400)
right(180)
end_fill()

#1 blue stripe
color("#005EB8")
begin_fill()
forward(400)
right(90)
forward(30)
right(90)
forward(400)
right(180)
end_fill()

#2 white stripe
color("white")
begin_fill()
forward(400)
right(90)
forward(100)
right(90)
forward(400)
right(180)
end_fill()

#2 blue stripe
color("#005EB8")
begin_fill()
forward(400)
right(90)
forward(30)
right(90)
forward(400)
right(180)
end_fill()

#3 white stripe
color("white")
begin_fill()
forward(400)
right(90)
forward(18)
right(90)
forward(400)
right(180)
end_fill()


#first triangle
penup()
goto(-30,25)
pendown()

pensize(3)
color("#005EB8")
for i in range(3):
    forward(70)
    right(120)
    
#second triangle
penup()
goto(-30,-17)
pendown()

for i in range(3):
    forward(70)
    left(120)
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
write("Israel", font=("Arial", 48, "normal"))
t.done()
