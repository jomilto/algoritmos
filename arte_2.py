import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myTurtle, length,color):
    if length < 50 :
        myTurtle.pencolor(color)
        myTurtle.forward(length)
        myTurtle.right(30)
        if length % 2 == 0 :
          draw(myTurtle, length+3, color)
        else:
          draw(myTurtle, length-1, color)

colors=['red','purple','blue','green','gray','orange']

for color in colors :
    draw(myTurtle, 5, color)

myWin.exitonclick()