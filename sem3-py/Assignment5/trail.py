# To find the number of all Pearson Numbers in a given range [a,b]

a= int(input("Enter the lower limit: "))
b= int(input("Enter the upper limit: "))

count=0

print("The numbers are: ")
 
for i in range(a,b+1):
    sum=0
    ndigits=len(str(i)) 
    temp=i
    for digit in range(ndigits):
        num=temp%10
        fact=1
        for j in range(2,num+1):
            fact*=j
        sum+=fact
        if sum>i : break
        temp=temp//10
    if sum==i: 
        print(i,end=", ")
        count+=1
print("\n the number of Pearson numbers in the range is :",count)



    
