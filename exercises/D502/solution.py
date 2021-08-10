file = open('weather.txt', 'r')
max_temp = 0
min_temp = 100
for line in file:
    words = line[32:].split()
    x = int(words[0])
    max_temp = max(max_temp, x)
    min_temp = min(min_temp, x)
file.close()
print(min_temp, max_temp)
    