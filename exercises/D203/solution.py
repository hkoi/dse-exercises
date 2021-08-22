n = int(input())
for i in range(10):
    for j in range(1, 11):
        k = i * 10 + j
        if k // 10 == n or k % 10 == n or k % n == 0:
            print('Clap', end='')
        else:
            print(k, end='')
        if j < 10:
            print(' ', end='')
        else:
            print()
