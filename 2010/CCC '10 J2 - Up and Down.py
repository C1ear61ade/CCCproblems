import math
a = int(input())
b = int(input())
c = int(input())
d = int(input())
s = int(input())
count1 = 0
count2 = 0
distance1 = 0
distance2 = 0
count1 = 0
count2 = 0

# Count the steps taken total taken by each person.
# I will count one back and forth as one complete iteration.
# If the iteration results in more steps then define in s, then subtract it by the difference of the two numbers.
for i in range(1,math.ceil(s/(a-b))):
    distance1 += a-b
    count1 += a + b
    if count1 > s:
        distance1 += count1 - s
        print(distance1)

for i in range(1,math.ceil(s/(c-d))):
    distance2 += c-d
    count2 += c + d
    if count2 > s:
        distance2 += count2 - s
        print(distance2)

if distance1 > distance2:
    print("Nikky")

elif distance1 < distance2:
    print("Bryon")

else:
    print("Tied")
