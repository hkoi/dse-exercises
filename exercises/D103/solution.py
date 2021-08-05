import math

a, b, c = input().split()
r = 3.141592653 * float(c) / 180.0
print(f'{0.5 * float(a) * float(b) * math.sin(r):.3f}')