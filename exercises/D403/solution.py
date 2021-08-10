s = input()
freqa = [0 for _ in range(26)]
for ch in s:
    freqa[ord(ch) - ord('A')] += 1
n = int(input())
for i in range(n):
    freqb = [0 for _ in range(26)]
    s = input()
    for ch in s:
        freqb[ord(ch) - ord('A')] += 1
    ok = True
    for j in range(26):
        if freqb[j] > freqa[j]:
            ok = False
    if ok:
        print('Yes')
    else:
        print('No')