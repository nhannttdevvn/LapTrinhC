class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def check(self, length, width):
        if length <= 0 or width <= 0:
           raise ValueError("Chiều dài và chiều rộng không phải là số dương.")
        else:
            self.length = length
            self.width = width

    def calculateArea(self):
        return self.length * self.width
    
try:
    length = float(input("Nhập chiều dài hình chữ nhật: "))
    width = float(input("Nhập chiều rộng hình chữ nhật: "))
    rectangle = Rectangle(length, width)
    area = rectangle.calculateArea()
    print("Diện tích của hình chữ nhật là:", area)
except ValueError as e:
    print("Lỗi", e)
