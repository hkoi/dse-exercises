ans = 0

def sort(l, r):
    global ans 
    ans += r - l + 1
    if l >= r:
        return
    p = a[r]
    i = l
    for j in range(l, r):
        if a[j] <= p:
            t = a[j]
            a[j] = a[i]
            a[i] = t
            i += 1
    t = a[i]
    a[i] = a[r]
    a[r] = t
    sort(l, i - 1)
    sort(i + 1, r)

n = int(input())
a = list(map(int, input().split()))
sort(0, n - 1)
for i, num in enumerate(a):
    print(num, end='')
    if i == n - 1:
        print()
    else:
        print(end=' ')
print(ans)
