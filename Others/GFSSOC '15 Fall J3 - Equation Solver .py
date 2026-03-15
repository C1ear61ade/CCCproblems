equation1 = input("Enter equation: ")
sum1 = 0
list1 = []
list2 = []

for i in equation1:

    if i != " ":
        if i.isdigit():
            list1.append(i)

        elif i == "M":
            list2.append(i)
        elif i == "P":
            list2.append(i)

        if len(list1) == 2:

            if list2[0] == "M":
                sum1 += int(list1[0]) - int(list1[1])
                list1.pop(1)
                list1.pop(0)
                list2.pop()

            elif list2[0] == "P":
                sum1 += int(list1[0]) + int(list1[1])
                list1.pop(1)
                list1.pop(0)
                list2.pop()

        if i == "=":
            print(sum1)
            break
    elif list1[1]:
        pass

