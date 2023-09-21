from turtle import *
import  turtle

t = Turtle()

n = int(input("Enter the hypotenous: "))
base = n/1.414
perp = n/1.414

t.setheading(45)
t.forward(n)
t.right(135)
t.forward(perp)
t.right(90)
t.forward(base)
turtle.done()

