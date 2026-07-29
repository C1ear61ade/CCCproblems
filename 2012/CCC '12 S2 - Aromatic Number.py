number = input()
base = 0
list = []
total = 0
prev_base = 0
prev_pair = 0
for i in number:
    if i.isdigit():
        list.append(i)
    else:
        if i == 'M':
            base = 1000
            t1 = base * int(list[-1])
        elif i == 'D':
            base = 500
            t1 = base * int(list[-1])
        elif i == 'C':
            base = 100
            t1 = base * int(list[-1])
        elif i == 'L':
            base = 50
            t1 = base * int(list[-1])
        elif i == 'X':
            base = 10
            t1 = base * int(list[-1])
        elif i == 'V':
            base = 5
            t1 = base * int(list[-1])
        elif i == 'I':
            base = 1
            t1 = int(list[-1])

        if base > prev_base:
            total -= 2*prev_pair

        total += t1
        prev_base = base
        prev_pair = t1



        list.pop()

print(total)
