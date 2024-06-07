class GrandParent:
    def __init__(self, name):
        self.name = name

    def greet(self):
        print(f"Hello, my name is {self.name}")

class Parent(GrandParent):
    def __init__(self, name, age):
        super().__init__(name)
        self.age = age

class Child(Parent):
    def __init__(self, name, age, hobby):
        super().__init__(name, age)
        self.hobby = hobby

    def introduce(self):
        print(f"Hi, my name is {self.name}, I'm {self.age} years old, and my hobby is {self.hobby}.")