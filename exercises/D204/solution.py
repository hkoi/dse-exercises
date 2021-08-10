n = int(input())
m = n // 2
for i in range(m + 1):
    for j in range(m + i + 1):
        if j == m - i or j == m + i:
            print('#', end='')
        else:
            print(' ', end='')
    print()
for i in range(m - 1, -1, -1):
    for j in range(m + i + 1):
        if j == m - i or j == m + i:
            print('#', end='')
        else:
            print(' ', end='')
    print()
