import turtle
from turtle import*

#hideturtle()

speed(0)
penup()
goto(-200,100)
pendown()

Screen().bgcolor("gray")

#first red
color("red")
begin_fill()
forward(100)
right(90)
forward(200)
right(90)
forward(100)
right(180)
end_fill()

#white
penup()
goto(-100,100)
pendown()
color("white")
begin_fill()
forward(200)
right(90)
forward(200)
right(90)
forward(200)
right(180)
end_fill()

#white
penup()
goto(100,100)
pendown()
color("red")
begin_fill()
forward(100)
right(90)
forward(200)
right(90)
forward(100)
right(180)
end_fill()


def draw_leaf(size):
    leaf_points = [[-1.2, 4.4], [-3, 5], [-2, 1],
                   [-4, 3], [-4.3, 1.5], [-7, 2.5], [-5.5, 0],
                   [-7, -1], [-3.3, -3.4], [-4, -5], [-0.2, -4.2],
                   [-0.2, -8], [0.2, -8], [0.2, -4.2], [4, -5],
                   [3.3, -3.4], [7, -1], [5.5, 0], [7, 2.5],
                   [4.3, 1.5], [4, 3], [2, 1], [3, 5],
                   [1.2, 4.4], [0, 7]]
    color("red")
    penup()
    goto(0, 7*size)
    pendown()
    begin_fill()
    for (x, y) in leaf_points:
        goto(x * size, y * size)
    end_fill()


draw_leaf(10)


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
write("Canada", font=("Arial", 48, "normal"))
done()
