from turtle import*
import turtle as t


speed(0)
penup()
goto(-200,100)
pendown()

color("#ABCAE9")
begin_fill()
forward(400)
right(90)
forward(200)
right(90)
forward(400)
right(90)
end_fill()
right(90)

#first star
penup()
goto(-20,60)
pendown()
color("white")
begin_fill()
for i in range(5):
    forward(40)
    right(180-180/5)
end_fill()

#second star
penup()
goto(-20,-60)
pendown()
color("white")
begin_fill()
for i in range(5):
    forward(40)
    left(180-180/5)
end_fill()

#third star
penup()
goto(40,10)
pendown()
right(15)
color("white")
begin_fill()
for i in range(5):
    forward(40)
    right(180-180/5)
end_fill()
left(15)

#fourth star
penup()
goto(-80,5)
pendown()
left(15)
color("white")
begin_fill()
for i in range(5):
    forward(40)
    right(180-180/5)
end_fill()
right(15)

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
write("Micronezia", font=("Arial", 48, "normal"))
t.done()
