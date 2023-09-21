from turtle import *
import turtle

t = Turtle()

t.color("red","yellow")
t.begin_fill()

while True:
    t.forward(100)
    t.right(170)
    if abs(t.pos())<1:
        break

t.end_fill()