password = input("Enter password: ")
count = 0
count2 = 0
count3 = 0
if 12 >= len(password) >= 8:
    for i in password:
        if i.islower():
            count += 1
        elif i.isupper():
            count2 += 1
        elif i.isdigit():
            count3 += 1

    if count >= 3 and count2 >= 2 and count3 >=1:
        print("Valid")
    else:
        print("Invalid")
else:
    print("Invalid")
