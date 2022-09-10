import turtle
from turtle import*
t=turtle.Turtle()
t.hideturtle()
turtle.tracer(3)
def rectangle(X,Y,length,width,clr):
    t.up()
    t.goto(X,Y)
    t.color(clr)
    t.begin_fill()
    for i in range (2):
        t.fd(length)
        t.right(90)
        t.fd(width)
        t.right(90)
    t.end_fill()
rectangle(-200,100,400,200,'blue')

def star(X1,Y1,size,points,clr):
    
    t.goto(X1,Y1)
    t.color(clr)
    t.begin_fill()
    for i in range(points):

        t.forward(size)
        t.left(180-180/points)
    t.end_fill()

star(-130,-65,50,7,'white')
star(100,-60,25,7,'white')
star(100,60,25,7,'white')
star(20,10,25,7,'white')
star(150,20,25,7,'white')
t.right(35)
star(120,-10,15,5,'white')


t.setheading(27)
rectangle(-210,0,240,20,'white')

t.setheading(27)
rectangle(-210,-10,240,5,'red')

t.setheading(-27)
rectangle(-210,110,240,20,'white')
t.stamp()

t.setheading(-27)
rectangle(-210,100,240,5,'red')

t.setheading(0)
rectangle(-200,60,200,40,'white')
#rectangle(-200,50,200,20,'red')

t.setheading(0)
rectangle(-120,100,40,120,'white')

t.setheading(0)
rectangle(-110,100,20,120,'red')
rectangle(-200,50,200,20,'red')

rectangle(-220,110,20,200,'white')

rectangle(-200,-20,210,10,'blue')

t.setheading(180)

rectangle(20,-30,25,130,'blue')

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
hideturtle()
t.penup()
t.color("black")
t.goto(0, -300)
t.write("Australia", font=("Arial", 48, "normal"))
turtle.done()