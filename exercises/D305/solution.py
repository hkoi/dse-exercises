s = input()
length = len(s)
if length == 8:
    sum = 9 * (ord(s[0]) - ord('A') + 10) + 8 * (ord(s[1]) - ord('A') + 10)
else:
    sum = 9 * 36 + 8 * (ord(s[0]) - ord('A') + 10)
sum += 7 * (ord(s[length - 6]) - ord('0'))
sum += 6 * (ord(s[length - 5]) - ord('0'))
sum += 5 * (ord(s[length - 4]) - ord('0'))
sum += 4 * (ord(s[length - 3]) - ord('0'))
sum += 3 * (ord(s[length - 2]) - ord('0'))
sum += 2 * (ord(s[length - 1]) - ord('0'))
if sum % 11 == 0:
    print(s + '(0)')
elif sum % 11 == 1:
    print(s + '(A)')
else:
    print(s + '(' + str(11 - sum % 11) + ')')
