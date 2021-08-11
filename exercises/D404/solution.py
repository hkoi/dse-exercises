n = int(input())
fare = [[] for _ in range(n)]
for i in range(n):
    fare[i] = list(map(float, input().split()))
m = int(input())
for i in range(m):
    x, y, c = input().split()
    x = int(x) - 1
    y = int(y) - 1
    if (c == 'A') != (x < y):
        t = x
        x = y
        y = t
    print(f'{fare[x][y]:.1f}')
