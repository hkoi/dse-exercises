import sys

s = []
for i in range(3):
    line = input()
    s.append(line)
for i in range(2):
    c = 'O'
    if i == 1:
        c = 'X'
    for j in range(3):
        if s[j][0] == c and s[j][1] == c and s[j][2] == c:
            print(c + ' wins')
            sys.exit(0)
        if s[0][j] == c and s[1][j] == c and s[2][j] == c:
            print(c + ' wins')
            sys.exit(0)
    if s[0][0] == c and s[1][1] == c and s[2][2] == c or \
            s[0][2] == c and s[1][1] == c and s[2][0] == c:
        print(c + ' wins')
        sys.exit(0)
for i in range(3):
    for j in range(3):
        if s[i][j] == '.':
            print('Not ended')
            sys.exit(0)
print('Draw')
