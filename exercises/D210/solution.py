n = int(input())
x, y = map(int, input().split())
x1 = x
y1 = y
sum = 0
for i in range(2, n + 1):
    x2, y2 = map(int, input().split())
    sum += x1 * y2 - x2 * y1
    x1 = x2
    y1 = y2
sum += x2 * y - x * y2
print(f'{sum / 2:.1f}')