from turtle import *
import turtle as t

hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

#red rectangle
color("#D82126")
begin_fill()
forward(400)
right(90)
forward(200)
right(90)
forward(400)
right(180)
end_fill()

def sunshine(x1,y1,x2,y2,x3,y3,clr):
    color(clr)
    penup()
    goto(x1,y1)
    pendown()
    begin_fill()
    goto(x2,y2)
    goto(x3,y3)
    end_fill()

sunshine(-200,100,-150,100,0,0,"#F8E92E")
sunshine(-200,-100,-150,-100,0,0,"#F8E92E")
sunshine(-17,100,17,100,0,0,"#F8E92E")
sunshine(-17,-100,17,-100,0,0,"#F8E92E")
sunshine(150,100,200,100,0,0,"#F8E92E")
sunshine(150,-100,200,-100,0,0,"#F8E92E")
sunshine(200,17,200,-17,0,0,"#F8E92E")
sunshine(-200,17,-200,-17,0,0,"#F8E92E")

#red circle center
color("#D82126")
penup()
goto(0,-50)
pendown()
begin_fill()
circle(50)
end_fill()

#yellow circle center
color("#F8E92E")
penup()
goto(0,-40)
pendown()
begin_fill()
circle(40)
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
write("Macedonia de Nord", font=("Arial", 32, "normal"))
t.done()
