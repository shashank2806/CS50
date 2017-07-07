while True:
    print("O hai! How much change is owed?")
    owed = float(input())
    if owed > 0:
        break
change = int(round(owed * 100))
x = change // 25
change-=25*x
y = change // 10
change-=10*y
z = change // 5
change-=5*z
a = change // 1
change-=1*a

print(x+y+z+a)