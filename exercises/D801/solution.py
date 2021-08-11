n, q = map(int, input().split())
a = list(map(int, input().split()))
x = list(map(int, input().split()))
for num in x:
    l = 0
    r = n - 1
    found = False
    while l <= r:
        mid = (l + r) // 2
        if a[mid] == num:
            found = True
            break
        elif a[mid] < num:
            l = mid + 1
        else:
            r = mid - 1
    if found:
        print('Yes')
    else:
        print('No')