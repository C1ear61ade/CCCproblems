P = int(input())
N = int(input())
R = int(input())

total = N
new = N
day = 0

while total <= P:
    new *= R
    total += new
    day += 1

print(day)