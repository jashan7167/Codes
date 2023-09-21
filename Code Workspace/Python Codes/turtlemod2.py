from turtle import Turtle

def drawsquare(t,x,y,length):
    t.up()
    t.goto(x,y)
    t.setheading(270)
    t.down()
    for count in range(4):
        t.forward(length)
        t.left(90)
    
 
a = Turtle()
y = int(input("Enter the y coordinate of the square: "))
x= int(input("Enter the x coordinate of the square: "))
len1 = int(input("Enter the length of the square: "))
drawsquare(a,x,y,len1)
Turtle.done()

