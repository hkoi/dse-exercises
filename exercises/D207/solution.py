n, m = map(int, input().split())
a = n
b = m
while b != 0:
    c = a % b
    a = b
    b = c
print(a)
print(n * m // a)