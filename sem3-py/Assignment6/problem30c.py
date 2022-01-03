#S= 1! + 2! + 3! + 4! + . . . using function

def fact(n):
    if n == 1:
        return 1
    else:
        return n* fact(n - 1)
        
n= int(input("Enter the desired value of n:"))
sum=0
for i in range(1, n+1):
    f=fact(i)
    sum+=f
    print(i,'!(',f,') +', end=" ")

print("\n The sum of the series is= ",sum)