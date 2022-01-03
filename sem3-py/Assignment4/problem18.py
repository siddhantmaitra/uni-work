#To find the sum of all the odd and even numbers between 1 and 100

sum1=0
sum2=0

print("The odd numbers are: ")
for i in range(1,101):
    if i%2!=0:
        print(i, end=", ")
        sum1+=i
print("\nThe sum of odd numbers is:",sum1)

print(" ")

print("The even numbers are: ")
for i in range(1,101):
    if i%2==0:
        print(i, end=", ")
        sum2+=i

print("\nThe sum of even numbers is", sum2)
