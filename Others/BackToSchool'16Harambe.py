essay = input("")
upperCount = 0
lowerCount = 0
for i in essay:
    if i.isupper():
        upperCount += 1
    elif i.islower():
        lowerCount +=1

if upperCount > lowerCount:
    essay = essay.upper()
    print(essay)

elif upperCount < lowerCount:
    essay = essay.lower()
    print(essay)
else:
    print(essay)