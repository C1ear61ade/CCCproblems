numberTickets = int(input())
totalTickets = int(input())
numberPeople = int(input())

remains = totalTickets - numberPeople

if remains >= numberTickets:
    print("Y " + str(remains-numberTickets))
else:
    print("N")