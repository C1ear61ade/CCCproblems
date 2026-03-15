kposition = input()
finalPosition = input()
list1 = []
lists = []
for i in kposition:
    if i != " ":
        list1.append(i)

for a in finalPosition:
    if a != " ":
        lists.append(a)

while True:
    x = int(list1[0])
    y = int(list1[-1])
    finalx = int(lists[0])
    finaly = int(lists[-1])
    count = 0
    count1 = 0
    count2 = 0
    count3 = 0
    count4 = 0
    count5 = 0
    count6 = 0
    count7 = 0
    if x != finalx and y != finaly:
        x -= 1
        y += 2
        count += 1
        if x == finalx and y == finaly:
            break
    if x != finalx and y != finaly:
        x += 1
        y += 2
        count1 += 1
        if x == finalx and y == finaly:
            break
    if x != finalx and y != finaly:
        x += 1
        y -= 2
        count2 += 1
        if x == finalx and y == finaly:
            break
    if x != finalx and y != finaly:
        x -= 1
        y -= 2
        count3 += 1
        if x == finalx and y == finaly:
            break
    if x != finalx and y != finaly:
        x += 2
        y += 1
        count4 += 1
        if x == finalx and y == finaly:
            break
    if x != finalx and y != finaly:
        x += 2
        y -= 1
        count5 += 1
        if x == finalx and y == finaly:
            break
    if x != finalx and y != finaly:
        x -= 2
        y += 1
        count6 += 1
        if x == finalx and y == finaly:
            break
    if x != finalx and y != finaly:
        x -= 2
        y -= 1
        count7 += 1
        if x == finalx and y == finaly:
            break

countList = [count, count1, count2, count3, count4, count5, count6, count7]
countList.sort()
print(countList[0])

