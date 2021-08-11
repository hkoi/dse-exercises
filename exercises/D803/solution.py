n = int(input())
x = list(map(int, input().split()))
a = [0 for _ in range(n)]
for i in range(n):
    k = max(0, i)
    for j in range(i - 1, -1, -1):
        if x[i] > a[j]:
            break
        a[j + 1] = a[j]
        k = j
    a[k] = x[i]
    for j in range(i):
        print(a[j], end=' ')
    print(a[i])
