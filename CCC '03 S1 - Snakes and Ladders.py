running = True
starting_square = 1
while running:
    diceNum = int(input("Enter number: "))

    if diceNum == 0:
        print("You Quit!")
        running = False

    starting_square += diceNum

    if starting_square < 101:

        if starting_square == 54:
            starting_square = 19
            print("You are on square " + str(starting_square))
        elif starting_square == 90:
            starting_square = 48
            print("You are on square " + str(starting_square))
        elif starting_square == 99:
            starting_square = 77
            print("You are on square " + str(starting_square))
        elif starting_square == 9:
            starting_square = 34
            print("You are on square " + str(starting_square))
        elif starting_square == 40:
            starting_square = 64
            print("You are on square " + str(starting_square))
        elif starting_square == 67:
            starting_square = 86
            print("You are on square " + str(starting_square))
        else:
            print("You are on square " + str(starting_square))

        if starting_square == 100:
            print("You Win!")
            running = False
    else:
        starting_square -= diceNum
        print("You are on square " + str(starting_square))



