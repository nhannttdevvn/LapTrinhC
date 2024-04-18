from point import Point


class Circle:
    __Center = Point
    __Radius = int

    def __init__(self, point=Point(), radius=1):
        self.__Center = point
        self.__Radius = radius

    def getRadius(self):
        return self.__Radius

    def print_Circle(self):
        print(
            "[(%s,%s)],%s" % (self.__Center.getX(), self.__Center.getY(), self.__Radius)
        )


def point_in_circle(Circle, Point):
    d = Circle.getCenter().distance(Point)
    if d <= Circle.getRadius():
        return True
    else:
        return False


point1 = Point(50, 100)

circle1 = Circle((150, 100), 75)
circle1.print_Circle()
circle1.print_Circle()
print(point_in_circle(circle1, point1))
