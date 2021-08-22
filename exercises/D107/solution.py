import math
n = int(input())
a = int(round(math.sqrt(n)))
b = int(math.floor(math.sqrt(n * 2)))
square = a * a == n
triangular = b * (b + 1) // 2 == n
if square and triangular:
    print('Both')
elif square:
    print('Square')
elif triangular:
    print('Triangular')
else:
    print('Neither')
