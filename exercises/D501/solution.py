file = open('account.txt', 'r')
n = int(file.readline())
balance = 0
for i in range(n):
    x = int(file.readline())
    balance += x
file.close()
print(balance)
