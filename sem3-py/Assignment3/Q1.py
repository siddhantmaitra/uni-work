# To compute the factorial of a number
N = int(input("Enter a number: "))
a = 1
for i in range(1, N+1):
  a*= i
print("The factorial of the number is:", a)