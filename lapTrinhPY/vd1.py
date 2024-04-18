class Person:
    name = str
    _age = int
    def __init__(self,name,age):
        self.name = name
        self._age=age
    def __str__(self):
        return "Ten %s, Tuoi: %d" % (self.name,self._age)
    def sayHello(self):
        print("Xin chao, ten %s tuoi %d" % (self.name,self._age))

class Student(Person):
    _studenID = int
    def __init__(self, name, age,studentID):
        super().__init__(name, age) 
        self._studenID =studentID
    def _str_(self):
        return super().__str__() + "MSV: %d" % (self._studenID)
    def get_studentID(self):
        return self._studenID
    def set_studentID(self,studentID):
        self._studenID = studentID

p1 = Person("Nhan",18)
print(p1)
s1 = Student("Nhan", 18,23110207)
