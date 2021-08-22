s = input()
length = len(s)
t = list(s)
for i in range(length // 2):
    c = t[i]
    t[i] = t[length - i - 1]
    t[length - i - 1] = c
t = ''.join(t)
print(t)
if s == t:
    print('Yes')
else:
    print('No')
