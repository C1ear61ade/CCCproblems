pNumber1 = int(input())
pNumber2 = int(input())
pNumber3 = int(input())
pNumber4 = int(input())

if pNumber1 < 10 and pNumber2 < 10 and pNumber3 < 10 and pNumber4:
    if pNumber1 == 8 or pNumber1 == 9:

        if pNumber4 == 8 or pNumber4 == 9:

            if pNumber2 == pNumber3:
                print("ignore")
            else:
                print("answer")

        else:
            print("answer")

    else:
        print("answer")
else:
    print("answer")
