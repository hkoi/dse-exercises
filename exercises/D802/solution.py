n, d = map(int, input().split())
a = list(map(int, input().split()))
ans = 0
for i in range(1, n):
    for j in range(n - i):
        if d == 0 and a[j] > a[j + 1] or \
            d == 1 and a[j] < a[j + 1]:
            t = a[j]
            a[j] = a[j + 1]
            a[j + 1] = t
            ans += 1
print(ans)
for i in range(n - 1):
    print(a[i], end=' ')
print(a[n - 1])
