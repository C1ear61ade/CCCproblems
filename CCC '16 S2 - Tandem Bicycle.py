questionType = int(input())
n = int(input())

DmojList = list(map(int, input().split()))
PegList  = list(map(int, input().split()))

# sorting decides min vs max
if questionType == 1:
    DmojList.sort()
    PegList.sort()
else:
    DmojList.sort()
    PegList.sort(reverse=True)

total = 0
for i in range(n):
    total += max(DmojList[i], PegList[i])

print(total)