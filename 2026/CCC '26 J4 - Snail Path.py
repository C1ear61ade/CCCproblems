movementNumber = int(input())
xPosition = 0
yPosition = 0
steps = ""
positions = set()
positions.add((0,0))
count = 0
for i in range(movementNumber):
    movement = input()
    direction = movement[0]
    steps = int(movement[1:])

    if direction == "N":
        for c in range(int(steps)):
            yPosition += 1
            if (xPosition,yPosition) in positions:
                count += 1
            else:
                positions.add((xPosition,yPosition))
    elif direction == "S":
        for c in range(int(steps)):
            yPosition -= 1
            if (xPosition,yPosition) in positions:
                count += 1
            else:
                positions.add((xPosition,yPosition))
    elif direction == "E":
        for c in range(int(steps)):
            xPosition += 1
            if (xPosition, yPosition) in positions:
                count += 1
            else:
                positions.add((xPosition, yPosition))
    elif direction == "W":
        for c in range(int(steps)):
            xPosition -= 1
            if (xPosition, yPosition) in positions:
                count += 1
            else:
                positions.add((xPosition, yPosition))

print(count)