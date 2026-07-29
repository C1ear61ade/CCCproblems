Ascore3 = int(input())
Ascore2 = int(input())
Ascore1 = int(input())
Bscore3 = int(input())
Bscore2 = int(input())
Bscore1 = int(input())
Atotal = Ascore3*3 + Ascore2*2 + Ascore1
Btotal = Bscore3*3 + Bscore2*2 + Bscore1

if Atotal > Btotal:
    print("A")
elif Atotal < Btotal:
    print("B")
elif Atotal == Btotal:
    print("T")
