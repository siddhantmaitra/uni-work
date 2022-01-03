# To find the number of all Armstrong Numbers in a given range 

a= int(input("Enter the lower limit: "))
b= int(input("Enter the upper limit: "))

count=0

print("The numbers are: ")
 
for i in range(a,b+1):
    sum=0
    power=len(str(i)) 
    temp=i
    for digit in range(power):
        sum+=pow(temp%10,power)
        if sum>i : break
        temp=temp//10
    if sum==i: 
        print(i,end=", ")
        count+=1
print("\n the number of Armstrong numbers in the range is :",count)



    
