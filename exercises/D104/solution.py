import math
a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
d = b * b - 4 * a * c
if d < 0:
    print('None')
elif d == 0:
    print(f'{-b / (2.0 * a):.3f}')
else:
    x = (-b - math.sqrt(d)) / (2.0 * a)
    y = (-b + math.sqrt(d)) / (2.0 * a)
    if x < y:
        print(f'{x:.3f} {y:.3f}')
    else:
        print(f'{y:.3f} {x:.3f}')
