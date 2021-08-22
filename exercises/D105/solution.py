y1, m1, d1 = map(int, input().split())
y2, m2, d2 = map(int, input().split())
a = 10000 * y1 + 100 * m1 + d1
b = 10000 * y2 + 100 * m2 + d2
if a < b:
    print('Before')
elif a == b:
    print('Same')
else:
    print('After')
