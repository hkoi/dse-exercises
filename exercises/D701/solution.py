n = int(input())
qs = 0
qe = 0
q = []
for _ in range(n):
    args = input().split()
    if args[0] == 'PUSH':
        q.append(args[1])
        qe += 1
    elif args[0] == 'FRONT':
        if qs == qe:
            print('Empty')
        else:
            print(q[qs])
    elif args[0] == 'POP':
        if qs == qe:
            print('Cannot pop')
        else:
            qs += 1
    else:
        print(qe - qs)
