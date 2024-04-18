class Animal:
    def __init__(self, name, species, age):
        self.name = name
        self.species = species
        self.age = age

    def infor(self):
        print(f"Đây là: {self.name}, thuộc loài: {self.species}, tuổi: {self.age} ")
    
    def speak( self):
        pass

class Dog(Animal):    
    def speak(self):
        return "Gau Gau"

class Cat(Animal):
    def speak(self):
        return "Meow meow"

class Bird(Animal):
    def speak(self):
        return "Chip chip"

dog = Dog("A", "dog", 3)
cat = Cat("B", "Cat", 5)
bird = Bird("C", "Bird", 2)

dog.infor()
print(dog.speak())

cat.infor()
print(cat.speak())

bird.infor()
print(bird.speak())
