n, h = map(int, input().split())
a = list(map(int, input().split()))
a = [0] + a 
b = list(map(int, input().split()))
b = [0] + b
y = int(input())
if y == 1:
    print(b[h])
    print(-1)
else:
    p = h
    for i in range(1, y - 1):
        p = b[p]
    print(h)
    print(p, a[p], b[b[p]])
