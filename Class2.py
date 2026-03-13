#names = ["Ryan", "Kate", "Max"]
#phone_numbers = ['123','456','789']
#print(phone_numbers[2])
#print(len(names))
#names[2] = 'Dean'
#print(names)
#phone_numbers.append('101112')
#names.append("Sam")
#print(names)
#print(phone_numbers[names.index('Ryan')])
#del names[3]
#print(names)
#names.pop()
#names.extend(phone_numbers)

#ist = [1,1,3,5,8,2,0]

#l = 'ryanshi'

#print(l[::2])

#a = [2,4,6,8,10]

#for a, b in enumerate(a):
#    print(a, b)

#a = 1

#def hello():
#    a = 2
#    print(a)

#hello()

#def add(a, b):
#    sum_number = a + b
#    return sum_number

#c = add (10, 29)
#print(c)

#class Student():
#    def __init__(self, name1, score):
#        self.score = score
#        self.name = name1
#    def say_hi(self):
#        print("Hi! I'm {}.".format(self.name))
#    def my_score(self):
#        print(self.score)

#ryan = Student('Ryan', 99)
#ryan.say_hi()
#ryan.my_score()

#kristen = Student('Kristen', 99)
#kristen.say_hi()

#class Person():
#    def __init__(self, weight):
#        self.weight = weight
#    def eat(self,food):
#        self.weight += food
#    def excersize(self):
#        self.weight -= 0.5

#ryan  = Person(80)
#print(ryan.weight)
#ryan.eat(1)
#print(ryan.weight)
#ryan.excersize()
#print(ryan.weight)

#class Circle():
#    def __init__(self, radius):
#        self.radius = radius
#    def area(self):
#        area = 3.1415926 * (self.radius**2)
#        return area
#    def circumference(self):
#        circumference = 2 * self.radius * 3.1415926
#        return circumference

#c1 = Circle(5)
#print(c1.radius)
#print(c1.area())
#print(c1.circumference())

class BankAccount():

    def __init__(self):
        self.balance = 0

    def deposit(self, money):
        self.balance += money
        return self.balance

    def withdraw(self, money):
        if money <= self.balance:
            self.balance -= money
        return self.balance

ryanBank = BankAccount()
ryanBank.deposit(100)
print(ryanBank.balance)
