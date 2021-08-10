a = list(map(int, input().split()))
file = open('chart.txt', 'w')
file.write("+-------------------------+\n")
for i in range(10, 0, -1):
    file.write('| ')
    for j in range(6):
        if a[j] >= i:
            file.write('### ')
        else:
            file.write('    ')
    file.write('|\n')
file.write("+-------------------------+\n")
file.close()
    