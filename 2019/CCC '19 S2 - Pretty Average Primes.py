import math

number = int(input())
number1 = number*2

for i in range(2, number1+1):
    prime = True
    #Check if the number is prime
    middle = math.sqrt(i)
    middleNumber = math.floor(middle)
    for b in range(2, middleNumber+1):
        if i%b == 0:
            prime = False
            break

    if prime:
        pNumber = number1 - i #Subtract the number to get the other number
        middle1 = math.sqrt(pNumber) #Square root my number to check if the number is prime
        middleNumber1 = math.floor(middle1) #Floor the number to make sure that it's an integer

        if middleNumber1 > 0: #Prevent 0 division error
            sPrime = True
            for x in range (2, middleNumber1 + 1):
                if pNumber % x == 0:#Check if the number is prime by dividing it by middleNumber1
                    sPrime = False
                    break
            if sPrime:
                print(str(pNumber) , str(i)) # Print out the two primes
                break