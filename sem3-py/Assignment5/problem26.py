#To check if input is pearson number
a=int(input("Enter any number: "))
temp=a
fact=1
sum=0
while(a>0):
     remainder=a%10
     fact=1
     for i in range(1,remainder+1):
         fact=fact*i
     sum=sum+fact
     a=a//10
if(sum==temp):
 print("The given input is a pearson number")
else:
    print("The given input is not a pearson number")