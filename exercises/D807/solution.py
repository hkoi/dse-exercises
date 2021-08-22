n = int(input())
a = list(map(int, input().split()))
p = a[n - 1]
i = 0
for j in range(n - 1):
    if a[j] <= p:
        t = a[j]
        a[j] = a[i]
        a[i] = t
        i += 1
t = a[i]
a[i] = a[n - 1]
a[n - 1] = t
for i, num in enumerate(a):
    print(num, end='')
    if i == n - 1:
        print()
    else:
        print(end=' ')
