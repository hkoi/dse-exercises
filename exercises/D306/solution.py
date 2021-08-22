import sys

s = input()
length = len(s)
if s.find('@') == -1:
    print('Invalid')
    sys.exit(0)
at = s.find('@')
if s.find('.', at) == -1:
    print('Invalid')
    sys.exit(0)
for i in range(length - 1):
    if s[i] == '.' and s[i + 1] == '.':
        print('Invalid')
        sys.exit(0)
if s[0] == '.' or s[at - 1] == '.' or s[at + 1] == '.' or s[-1] == '.':
    print('Invalid')
    sys.exit(0)
for i in range(at):
    if not (s[i].isalnum() or s[i] == '.' or s[i] == '+'):
        print('Invalid')
        sys.exit(0)
for i in range(at + 1, length):
    if not (s[i].isalnum() or s[i] == '.' or s[i] == '-'):
        print('Invalid')
        sys.exit(0)
    if i < length - 1 and (s[i] == '.' and s[i + 1] == '-' or s[i] == '-' and s[i + 1] == '.'):
        print('Invalid')
        sys.exit(0)
print('Valid')
