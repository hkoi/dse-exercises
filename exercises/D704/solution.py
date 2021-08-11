n, h = map(int, input().split())
a = list(map(int, input().split()))
a = [0] + a 
b = list(map(int, input().split()))
b = [0] + b
x, y = map(int, input().split())
if y == 0:
    print(n + 1)
    print(x, h)
    print(-1)
else:
    p = h
    for i in range(1, y):
        p = b[p]
    print(h)
    print(x, b[p])
    print(p, a[p], n + 1)