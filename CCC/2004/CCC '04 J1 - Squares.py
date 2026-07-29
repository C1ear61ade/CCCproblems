import math
tiles = int(input("Enter number of tiles: "))
for i in range(1, tiles+1):
    tiles1 = tiles - i
    if tiles1 > 0:
        sqrRoot = int(math.sqrt(tiles1))
        if sqrRoot*sqrRoot == tiles1 :
            print("The largest square possible has a length of "+ str(sqrRoot) + " units" )
            break