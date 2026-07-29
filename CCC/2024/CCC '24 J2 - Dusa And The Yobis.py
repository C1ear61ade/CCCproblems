DusaSize = int(input())
while True:
    YobiSize = int(input())
    if DusaSize > YobiSize:
        DusaSize += YobiSize
    elif DusaSize == YobiSize or DusaSize < YobiSize:
        print(DusaSize)
        break