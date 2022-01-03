#To check whether a number is prime or not

n=int(input("Enter the number: "))
isprime=True

for i in range(2,n):
    if (n%i==0):
        isprime=False
        break 
if isprime==False or n==1:
    print("The entered number is not prime.")
else:
    print("The entered number is prime")
