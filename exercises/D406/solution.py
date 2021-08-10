n = int(input())
a = input().split()
b = []
c = 0
for i in range(n):
    found = False
    for j in range(i):
        if a[j] == a[i]:
            found = True
    if not found:
        b.append(a[i])
        c += 1
print(c)
for i in range(c - 1):
    print(b[i], end=' ')
print(b[c - 1])