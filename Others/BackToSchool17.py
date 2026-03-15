sentence = input("")
sentence1 = ""
words = sentence.split()

for i in range(len(words)):
    if i == 0:
        sentence1 += words[i]
    elif words[i][0].isupper():
        sentence1 += ". " + words[i]
    else:
        sentence1 += " " + words[i]

print(sentence1 + ".")
