from turtle import *

def piirra_nelio(sivu, x, y):

 if x > 0:
  color("blue")
  begin_fill()
  up()
  setx(x)
  sety(y)
  down()
  forward(sivu)
  left(90)
  forward(sivu)
  left(90)
  forward(sivu)
  left(90)
  forward(sivu)
  end_fill()
  
 else:
  color("red")
  begin_fill()
  up()
  setx(x)
  sety(y)
  down()
  forward(sivu)
  left(90)
  forward(sivu)
  left(90)
  forward(sivu)
  left(90)
  forward(sivu)
  end_fill()
done()