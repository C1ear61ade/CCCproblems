# Python Decorators
# A decorator is a function that takes another function as input and returns a new function.
# It is like in math functions, you take the output of some function f(x) and input it into a new function, say g(x).
# It will be something like g(f(x))
#Ex.

def changecase(func):
  def myinner():
    return func().upper()
  return myinner

@changecase
def myfunction():
  return "Hello Sally"

print(myfunction())

# *args and *kwargs
# Sometimes the decorator function has no control over the arguments passed from decorated function, to solve this problem, add (*args, **kwargs) to the wrapper function, this way the wrapper function can accept any number, and any type of arguments, and pass them to the decorated function.
#Ex.
def changecase(func):
  def myinner(*args, **kwargs):
    return func(*args, **kwargs).upper()
  return myinner

@changecase
def myfunction(nam):
  return "Hello " + nam

print(myfunction("John"))

# ---------------------------------------------------------------------------------------------------

def add8(func):
  def wrapper():
    number2 = func()
    return number2 + 8
  return wrapper

@add8
def hello():
  number1 = int(input('Enter number: '))
  return number1

print(hello())