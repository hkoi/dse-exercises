n = int(input())
qs = 0
qe = 0
q = [0 for _ in range(10001)]
for _ in range(n):
    args = input().split()
    if args[0] == 'PUSH':
        q[qe] = args[1]
        qe += 1
        if qe == 10001:
            qe = 0
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
            if qs == 10001:
                qs = 0
    else:
        print((10001 + qe - qs) % 10001)
