
#to find the sum of all the Prime numbers between a given range of numbers.

print("Finding primes in an interval and evaluating their sum")
lower=int(input("\n Enter lower limit :"))
upper=int(input("\n Enter upper limit :"))
sum=0

for num in range(lower,upper+1):
    isprime=True
    for i in range(2,num):
        if (num%i==0):
            isprime=False
            break
    if (isprime and num>1):
        sum+=num
        print(num, end=" ")

print("\n The sum of primes is ", sum)
