from turtle import *

t = Turtle()

t.down()
t.setheading(60)
l = int(input("Enter the length of the traingle: "))

for i in range(3):
    t.forward(l)
    t.right(120)

turtle.done()