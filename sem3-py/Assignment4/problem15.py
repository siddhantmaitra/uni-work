#Generate PASCAL's triangle with specified number of rows

n=int(input("Enter the number of rows: "))

for i in range(n):
    s=n-i
    print(" "*s, end=" ")
    for j in range(i+1):
        x=1
        if j>i-j:
            j=i-j
        for k in range(j):
            x*=(i-k)
            x//=(k+1)
        print(x, end=" ")
    print(" ")
