import math
class Point:
    __x = int
    __y = int

    def __init__(self,x=0,y=1): 
        #ham tich hop san
        self.x=x
        self.y=y
    
    def read(self):
        tmp = input("Nhap vao x,y:")
        self.__x = int(tmp.split()[0])
        self.__y = int(tmp.split()[1])

    def __str__(self): 
        return f"({self.__x}, {self.__y}) \n"

    def move(self,dx=0,dy=0):
        self.__x+=dx
        self.__y+=dy

    # get set bat buoc voi lop co thuoc tinh private
    def getX(self):
        return self.__x
    def getY(self):
        return self.__y
    # overloading - dung none
    # khi dung distance : dung 1 ham cho nhieu doi so
    def distance(self,*args):
        # * + bien = list
        if len(args) == 0:
            return math.sqrt(self.__x**2+self.__y**2)
        if len(args) ==1 and isinstance(args[0], Point):
            return math.sqrt((self.__x-args[0].__x)**2+(self.__y-args[1].__y)**2)
    


p1 = Point()
print(p1)

p2 = Point (-50,100)
print(p2)

p3 = Point()
p3.read()
print(p3)

