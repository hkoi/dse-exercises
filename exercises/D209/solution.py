n = int(input())
nums = list(map(int, input().split()))
ok = True
if nums[0] <= 100 or nums[0] >= 50000:
    ok = False
prev = nums[0]
for i in range(1, n):
    if nums[i] <= 100 or nums[i] >= 50000 or prev >= nums[i]:
        ok = False
    prev = nums[i]
if ok:
    print('Valid')
else:
    print('Invalid')
