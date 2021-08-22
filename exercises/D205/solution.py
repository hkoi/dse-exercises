import math

n = input()
print(n + '=', end='')
n = int(n)
m = int(math.sqrt(n))
first = True
for i in range(2, m + 1):
    while n % i == 0:
        if not first:
            print('*', end='')
        print(i, end='')
        n = n // i
        first = False
if n > 1:
    if not first:
        print('*', end='')
    print(n, end='')
print()
