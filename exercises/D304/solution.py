s = input()
length = len(s)
count = 0
t = '____________________'
t = list(t[:length])
while count < length:
    c = input()
    for i, char in enumerate(s):
        if char == c:
            t[i] = c
            count += 1
    print(''.join(t))
