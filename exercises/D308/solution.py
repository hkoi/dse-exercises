s = input()
t = input()
a = 0
b = 0
len1 = len(s)
len2 = len(t)
for i in range(len1 - len2 + 1):
    if  s[i: i + len2] == t:
        a += 1
i = 0
while i <= len1 - len2:
    if  s[i: i + len2] == t:
        b += 1
        i += len2 - 1
    i += 1
print(a)
print(b)
