import turtle
teddy = turtle.Turtle()

names = ["violet", "purple", "indigo", "black"]
for c in names:
  teddy.color(c)
  teddy.left(60) 
  teddy.forward(40) 
  teddy.dot(10)
  
teddy.penup() 
teddy.forward(100) 
teddy.pendown()
teddy.dot(10)
     
turtle.done()