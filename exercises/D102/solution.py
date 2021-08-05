value = input()
fare = float(value[1:])
ten_cents = round(fare * 10)
if ten_cents % 2 == 0:
    ten_cents_halved = ten_cents // 2
else:
    ten_cents_halved = ten_cents // 2 + 1
print(ten_cents_halved / 10.0)


