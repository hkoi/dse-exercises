n = int(input())
a = [False for _ in range(n + 1)]
for i in range(2, n + 1):
    if not a[i]:
        print(i)
        for j in range(i * i, n + 1, i):
            a[j] = True
