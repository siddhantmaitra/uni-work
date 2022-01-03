# To print the reverse of a number

N = int(input("Enter a number: "))
rev = 0

while(N > 0):
    a = N % 10
    rev = rev * 10 + a
    N = N // 10
    
print("The reverse of the number:", rev)