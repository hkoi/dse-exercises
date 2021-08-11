def recur(l, r):
    if l == r:
        return
    mid = (l + r) // 2
    recur(l, mid)
    recur(mid + 1, r)
    print(l, mid, mid + 1, r)

n = int(input())
recur(1, n)
