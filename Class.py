class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        return f"My dog's name is {self.name} and it is {self.age} month old"


dg1 = Dog('James',6)

print(dg1)
print(dg1.name)
print(dg1.age)


class Car:
    def __init__(self, name, speed, color):
        self.name = name
        self.speed = speed
        self.color = color

    def motion(self):
        tm = int(input('Enter time of travel in hours: '))
        print(f"{self.name} go forward " + str(tm * int(self.speed)) + 'km')

    def changecolor(self):
        print(self.color)
        c=input('Enter the color you want to change to: ')
        self.color = c
        print(self.color)

    def changename(self):
        print(f"Your car name right now is {self.name}, please enter your new name below")
        name1 = input('Enter your new name: ')
        self.name = name1

car1 = Car('Lambourgini', 10, 'red')

car1.motion()
car1.changecolor()

