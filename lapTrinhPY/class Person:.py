class Person:
    def __int__(self, name=None, age=None):
        self.name = name
        self._age = age 
        print("Person constructor called")
    def say_hello(self):
        print(f"Hello, my namse is {self.name} and I am {self.age} years old.")
    def _del__(self):
        print("Person destructor called") 

class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age) #goi lai thuoc tinh cua cha, nhập đè
        self.__student_id = student_id
        print("Student constructor called")
    def say_hello(self):
        super().say_hello()
        print(f"My student ID is {self.student_id}.")
    def get_student_id(self):
        return self.__student_id

# Person.say_hello() #print "Hello, my name is John and I am 25 years old."

student = Student("Jane",21,"1234")
student.say_hello()

print(student.name)
print(student._age)
print(student.__student_id) 