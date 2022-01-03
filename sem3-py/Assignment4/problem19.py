# To find the sum of all the numbers divisible by 7 in a given range

a= int(input("Enter the lower limit: "))
b= int(input("Enter the upper limit: "))

sum=0 
print("The number divisible by 7: ")

for i in range(a,b+1):
    if i%7==0:
        print(i,end=", ")
        sum+=i
print("\nThe sume is: ", sum)
