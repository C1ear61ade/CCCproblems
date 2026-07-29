code = input("")
lists = []
number = " "
for i in code:
    if i != " ":
        if i.isdigit():
            number += i
        else:
            lists.append(i)
            for a in range(int(number)):
                print(lists[-1], end="")
            lists.pop()