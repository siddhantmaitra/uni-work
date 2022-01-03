#To find perfect numbers in a given range 

lower= int(input("Enter the lower limit: "))
upper= int(input("Enter the upper limit: "))

count=0

print("The numbers are: ")

for num in range(lower,upper+1):
    sum=0
    for i in range(1,num):
        if num%i==0:
            sum=sum+i
    if num==sum:
        print(num,end=",")
        count=count+1
print("\nThe no. of perfect nos. found  are= ", count)
    
