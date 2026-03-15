sentence = input("")
sentence2 = input("")
if sorted(sentence.replace(" ", "").lower()) == sorted(sentence2.replace(" ", "").lower()):
    print("Is an anagram.")
else:
    print("Is not an anagram.")