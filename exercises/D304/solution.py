s = input()
length = len(s)
count = 0
t = '____________________'
t = t[:length]
while count < length:
    c = input()
    for i, char in enumerate(s):
        if char == c:
            t = t[:i] + c + t[i + 1:]
            count += 1
    print(t)
