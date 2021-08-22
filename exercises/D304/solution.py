s = input()
length = len(s)
count = 0
t = '____________________'
t_list = list(t[:length])
while count < length:
    c = input()
    for i, char in enumerate(s):
        if char == c:
            t_list[i] = c
            count += 1
    print(''.join(t_list))
