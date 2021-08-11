n, m = map(int, input().split())
a = list(map(int, input().split()))
a = [0] + a
b = [0 for _ in range(n + 1)]
for i in range(m):
    l1, r1, l2, r2 = map(int, input().split())
    j = l1
    k = l2
    t = l1
    while t <= r2:
        # short circuit: k == m is checked first
        if k > r2 or j <= r1 and a[j] < a[k]:
            b[t] = a[j]
            j += 1
        else:
            b[t] = a[k]
            k += 1
        t += 1
    for j in range(l1, r2 + 1):
        a[j] = b[j]
        print(a[j], end='')
        if j == r2: 
            print() 
        else:
            print(end=' ')