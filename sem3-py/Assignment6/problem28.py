#to find the Factorial of a given number using function

def fact(n):
    if n == 1:
        return 1
    else:
        return n* fact(n - 1)
        
i=int(input("enter a number: "))
f=fact(i)
print("\n FACTORIAL OF THE GIVEN NUMBER = ",f)