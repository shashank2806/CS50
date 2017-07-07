while True:
    print("Height: ", end = "")
    height = int(input())
    if (height >= 0) and (height <=23):
        break
h = 2
s = height - 1
for i in range(height):
    print(" " * s + "#" * h)
    h+=1
    s-=1