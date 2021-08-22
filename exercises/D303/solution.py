s = input()
length = len(s)
t_list = list(s)
for i in range(length // 2):
    c = t_list[i]
    t_list[i] = t_list[length - i - 1]
    t_list[length - i - 1] = c
t = ''.join(t_list)
print(t)
if s == t:
    print('Yes')
else:
    print('No')
