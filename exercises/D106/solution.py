n = int(input())
units = n % 10
if n >= 10 and n // 10 % 10 == 1:
    print(f'{n}th')
elif units == 1:
    print(f'{n}st')
elif units == 2:
    print(f'{n}nd')
elif units == 3:
    print(f'{n}rd')
else:
    print(f'{n}th')
