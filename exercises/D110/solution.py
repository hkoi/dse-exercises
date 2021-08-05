k1 = input()
k2 = input()
c = abs(ord(k1[0]) - ord(k2[0]))
r = abs(ord(k1[1]) - ord(k2[1]))
if c > r:
    print(c)
else:
    print(r)