import random
numbers = int(input())

while True:
    players = sorted(random.sample(range(1, numbers), 3))
    players.append(numbers)