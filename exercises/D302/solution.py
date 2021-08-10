s = input()
length = len(s)
count = 0
for ch in s:
    if ch == ' ':
        count += 1
print(length)
print(count + 1)
