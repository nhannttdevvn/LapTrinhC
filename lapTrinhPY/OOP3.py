class Point:
  __x=int
  __y=int

  def __init__(self,x=0,y=0): 
    self.__x=x
    self.__y=y  

  def getX(self):
    return self.__x
  def getX(self):
    return self.__y
  def setXY(self,a,b):
    self.__x =a
    self.__y =b
  def print_point(self):
    print("(%s,%s)" % (self.__x,self.__y))