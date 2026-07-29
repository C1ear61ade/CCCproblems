keyword = input().strip()
message = input()

text = ""
for c in message:
    if c.isalpha():
        text += c

columns = len(keyword)
code = ""

for i in range(len(text)):
    shift = ord(keyword[i % columns]) - ord('A')
    p = ord(text[i]) - ord('A')

    c = (p + shift) % 26
    code += chr(c + ord('A'))

print(code)