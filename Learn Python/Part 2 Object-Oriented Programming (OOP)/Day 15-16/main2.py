class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print("The animal makes a sound.")

class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)

    def speak(self):
        super().speak()
        print("The dog barks.")

dog1= Dog("Corgi")
dog2= Animal("Lulu")
dog1.speak()
dog2.speak()