n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
j = 0
k = 0
for i in range(n + m):
    # short circuit: k == m is checked first
    if k == m or j != n and a[j] < b[k]:
        print(a[j], end='')
        j += 1
    else:
        print(b[k], end='')
        k += 1
    if i == n + m - 1: 
        print() 
    else:
        print(end=' ')