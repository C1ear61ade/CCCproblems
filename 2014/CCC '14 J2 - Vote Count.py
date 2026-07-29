numberVote = int(input())
votes = str(input())
totalA = 0
totalB = 0
for i in votes:
    if i == "A":
        totalA += 1

    elif i == "B":
        totalB += 1

if totalA>totalB:
    print("A")
elif totalA<totalB:
    print("B")
else:
    print("Tie")