# To print the sum of the digits of a number

N = int(input("Enter a number: "))
sum1 = 0

while(N > 0):
    sum1 += N % 10
    N = N // 10
    
print("The sum of the digits of the number:", sum1)