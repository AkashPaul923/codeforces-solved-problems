a = int(input())
x = 0

for i in range(a):
    s = input()
    if s[1] == '+':
        x += 1
    else:
        x -= 1

print(x)
