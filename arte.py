import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myTurtle, length):
    if length > 0 :
        myTurtle.forward(length)
        myTurtle.right(30)
        draw(myTurtle, length-8)

draw(myTurtle, 100)

myWin.exitonclick()