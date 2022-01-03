#S=1 + 1/4 + 1/9 + 1/16 + 1/25 . . . using function 

def func(n):
    k=range(1,n+1)
    sum=0
    for i in k:
        sum = sum + 1/(i**2)
    return sum

n=int(input("enter range: "))
print("The sum of the series is ",func(n))