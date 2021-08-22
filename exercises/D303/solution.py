s = input()
length = len(s)
t = s
for i in range(length // 2):
    c = t[i]
    t = t[:i] + t[length - i - 1] + t[i + 1:]
    t = t[:length - i - 1] + c + t[length - i:]
print(t)
if s == t:
    print('Yes')
else:
    print('No')
