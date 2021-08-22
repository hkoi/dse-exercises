h, w = map(int, input().split())
s = []
for i in range(h):
    line = list(input())
    s.append(line + ['#'])
s.append(['#' for _ in range(w + 1)])
s[h][w - 1] = 'S'
for i in range(h - 1, -1, -1):
    for j in range(w - 1, -1, -1):
        if s[i][j] == '#':
            continue
        if s[i + 1][j] == 'S' or s[i + 1][j] == 'E':
            s[i][j] = 'S'
        elif s[i][j + 1] == 'S' or s[i][j + 1] == 'E':
            s[i][j] = 'E'
row = 0
col = 0
for i in range(h + w - 2):
    print(s[row][col], end='')
    if s[row][col] == 'S':
        row += 1
    else:
        col += 1
print()
