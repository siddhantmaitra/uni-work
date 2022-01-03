#S=1 + 2 + 3 + 4 + 5 + . . . using function 

def func(n):
    k=range(0,n+1)
    sum=0
    for i in k:
        sum = sum + i
    return sum

n=int(input("enter end term: "))
print("The sum of the series till given term ",n,"is ",func(n))