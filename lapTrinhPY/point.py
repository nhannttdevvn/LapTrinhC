class Point:
  __x=int
  __y=int

  def __init__(self,x=0,y=0): 
    self.__x=x
    self.__y=y  

  def getX(self):
    return self.__x
  def getY(self):
    return self.__y
  def setXY(self,a,b):
    self.__x =a
    self.__y =b
  def print_point(self):
    print("(%s,%s)" % (self.__x,self.__y))

  def distance(self,other):
    return (math.sqrt((self.__x-other.__x)**2 + (self.__y-other.__y)**2))
  
  p1 =Point(3,5)
  p2 = Point(-5,10)