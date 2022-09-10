import turtle
from turtle import *
speed(0)
Screen().bgcolor("gray")
turtle.title('Coreea De Nord Buza Catalin TI-214')

def drawFillRectangle(x,y,length,width,color):
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown()
    turtle.color(color)
    turtle.begin_fill()
    turtle.forward(width)
    turtle.right (90)
    turtle.forward(length)
    turtle.right (90)
    turtle.forward (width)
    turtle.right (90)
    turtle.forward(length)
    turtle.right (90)
    turtle.end_fill()

def drawCircle(x,y,color,radius):
    turtle.penup()
    turtle.goto(x, y)
    turtle.color(color)
    turtle.begin_fill()
    turtle.circle(radius)
    turtle.end_fill()

def drawStar(x,y,color,length):
    turtle.penup()
    turtle.goto(x, y)
    turtle.setheading(0)
    turtle.pendown()
    turtle.begin_fill()
    turtle.color(color)
    for star in range(0, 5):
        turtle.forward(length)
        turtle.right(144)

    turtle.end_fill()

drawFillRectangle(-200, 100, 68, 400,"#024FA2")
drawFillRectangle(-200, 100-68, 4, 400,"white")
drawFillRectangle(-200, 100-68-4, 122, 400,"#ED1C27")
drawFillRectangle(-200, 100-68-4-122, 4, 400,"white")
drawFillRectangle(-200, 100-68-4-122-4,68,400,"#024FA2")

drawCircle(-80,-87, "white", 55)
drawStar(-130, -16, "red", 100)


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
ht()
penup()
color("black")
goto(-100, -300)
write("Steagul Coreea de Nord TI-214 Buza Catalin", font=("Arial",14,"normal"))
turtle.done ()
