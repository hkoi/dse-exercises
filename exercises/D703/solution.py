n, h = map(int, input().split())
a = list(map(int, input().split()))
a = [0] + a
b = list(map(int, input().split()))
b = [0] + b
p = h
while p != 0:
    print(a[p])
    p = b[p]
print('End')