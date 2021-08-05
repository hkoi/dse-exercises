a, x, b, y, c = input().split()
a = int(a)
b = int(b)
c = int(c)
if x == '+' and y == '+': ans = a + b + c
if x == '+' and y == '-': ans = a + b - c
if x == '+' and y == '*': ans = a + b * c
if x == '-' and y == '+': ans = a - b + c
if x == '-' and y == '-': ans = a - b - c
if x == '-' and y == '*': ans = a - b * c
if x == '*' and y == '+': ans = a * b + c
if x == '*' and y == '-': ans = a * b - c
if x == '*' and y == '*': ans = a * b * c
print(ans)
