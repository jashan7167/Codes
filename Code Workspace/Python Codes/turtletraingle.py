from turtle import Turtle
import turtle

a = Turtle()

len1 = int(input("Enter the length of the traingle: "))
a.down()
a.setheading(90)

for i in range(4):
    a.forward(len1)
    a.right(135)


turtle.done()



