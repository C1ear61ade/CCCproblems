antennaeNumber = int(input())
eyeNumber = int(input())

if antennaeNumber >= 3:
    if eyeNumber <= 4:
        print("TroyMartian")
if antennaeNumber <= 6:
    if eyeNumber >= 2:
        print("VladSaturnian")
if antennaeNumber <= 2:
    if eyeNumber <= 3:
        print("GraemeMercurian")