scoresList = []
for i in range(5):
    score = int(input())
    scoresList.append(score)
difficulty = int(input())
scoresList.sort()
scoresList= scoresList[1:4]

total = sum(scoresList)
print(total*difficulty)