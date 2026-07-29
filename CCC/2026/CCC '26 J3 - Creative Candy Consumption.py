Ngoc = str(input())
Minh = str(input())
Ncount = 0
Mcount = 0
length = min(len(Ngoc),len(Minh))
for i in range(length):
        if Ngoc[i] == Minh[i]:
            Ncount += 1
            Mcount += 1
        elif Ngoc[i] == "R" and Minh[i] == "G":
            Ncount += 1
        elif Ngoc[i] == "G" and Minh[i] == "B":
            Ncount += 1
        elif Ngoc[i]== "B" and Minh[i] == "R":
            Ncount += 1
        else:
            Mcount += 1
if len(Ngoc) > len(Minh):
    Ncount += len(Ngoc) - len(Minh)
elif len(Ngoc) < len(Minh):
    Mcount += len(Minh) - len(Ngoc)

print(Ncount)
print(Mcount)