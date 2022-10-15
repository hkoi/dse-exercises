issquare = lambda x: round(x**0.5)**2 == x
n = int(input())
square = issquare(n)
triangular = issquare(8*n+1)
# N is triangular if 8n+1 is a square number

if square and triangular:
    print("Both")
elif square:
    print("Square")
elif triangular:
    print("Triangular")
else:
    print("Neither")
