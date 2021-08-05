import math

a = float(input())
b = float(input())
c = float(input())
r = 3.141592653 * c / 180.0
print(f'{0.5 * a * b * math.sin(r):.3f}')