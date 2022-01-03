#To check whether the given number is a perfect number 
a= int(input("Enter the number: "))

sum=0 
print("The factors are: ")
for i in range(1,a):
    if a%i==0:
        sum=sum+i
        print(i,end=" ")
  
if sum==a:
    print("\nThe sum is: ", sum)
    print("\nThe given number is a perfect number",)
else:
    print("\nThe given number is not a perfect number")

        