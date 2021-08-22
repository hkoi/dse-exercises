n = int(input())
nums = list(map(int, input().split()))
a = -2147483648
b = -2147483648
for i in range(n):
    if nums[i] >= a:
        b = a
        a = nums[i]
    elif nums[i] > b:
        b = nums[i]
print(a)
print(b)
