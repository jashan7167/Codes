from turtle import Turtle
import turtle


t = Turtle()
turtle.colormode(255)
t.forward(100)
t.goto(0,50)
t.setheading(270)
t.pencolor(0,255,0)
t.forward(200)
# t.up() disables the drawing
t.right(45)
t.forward(50)
t.home()
t.showturtle()

print(t.isdown(),t.heading(),t.pencolor(),t.position())
turtle.done() 

