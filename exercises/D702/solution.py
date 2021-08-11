n = int(input())
size = 0
st = []
for _ in range(n):
    args = input().split()
    if args[0] == 'PUSH':
        st.append(args[1])
        size += 1
    elif args[0] == 'TOP':
        if size == 0:
            print('Empty')
        else:
            print(st[size - 1])
    elif args[0] == 'POP':
        if size == 0:
            print('Cannot pop')
        else:
            st.pop(-1)
            size -= 1
    else:
        print(size)
