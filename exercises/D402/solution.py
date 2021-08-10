n = int(input())
barcodes = []
prices = []
for i in range(n):
    barcode, price = input().split()
    barcodes.append(int(barcode))
    prices.append(float(price))
sum = 0
m = int(input())
for i in range(m):
    k = int(input())
    for j in range(n):
        if barcodes[j] == k:
            sum += prices[j]
print(sum)