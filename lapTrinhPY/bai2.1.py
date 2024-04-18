from bai11 import Point

class LineSegment:
    __d1 = Point
    __d2 = Point

    def __init__(self,*args):
        if len(args)==0:
            self.__d1 = Point(8,5)
            self.__d2 = Point(1,0)
        if len(args)==2 and isinstance(args[0],Point) and isinstance(args[1],Point):
        #  //Kiem tra xem doi so thu nhat, hai cua argument co thuoc lop Point khong
            self.__d1 = args[0]
            self.__d2=args[1]
        if len(args)==4  and isinstance(args[0],int):
            self.__d1 = Point(args[0],args[1])
            self.__d2 = Point(args[2],args[3])
        if len(args)==1 and isinstance(args[0],LineSegment):
        #sao chesp sau doi tuong S
            self = copy.deepcopy(args[0])
       
    def read(self):  #read() -> da hinh: cung 2 ten dung cho 2 doi tuong khac nhau ( co dung trong Point)
        a = input("Nhap x1,x2,y1,y2: ").split()
        self.__d1 = Point(int(a[0]),int(a[1]))
        self.__d2 = Point(int(a[2]),int(a[3]))
    def __str__(self):
        return f"[({self.__d1.getX__()}, {self.__d1.getY__()},{self.__d2.getX__()},{self.__d2.getY__()})]"


    def move(self,dx=0,dy=0):  
        self.__d1.move(dx,dy)
        self.__d2.move(dx,dy)
    
    def length(self):
        return self.__d1


d1 = LineSegment()
print(d1)

p1=Point(3,5)
p2=Point(-5,8)

d2 = LineSegment(p1,p2)
print(d2)

d3=LineSegment(1,2,3,4)
print(d3)

d4=LineSegment(d1)
print(d4)