import math 

n = int(input())
m = int(math.sqrt(n))
for i in range(1, m + 1):
    if n % i == 0:
        print(i)
if m * m == n:
    m -= 1
for i in range(m, 0, -1):
    if n % i == 0:
        print(n // i)
