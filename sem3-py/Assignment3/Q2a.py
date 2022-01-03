sum1 = 0
N = int(input("Enter N: "))
x = 1

print("\nUsing For loop")
for i in range(N):
    print(x, end=" ")
    sum1 += x
    x += 1

print("\nThe Sum is:", sum1)

i = 0
sum2 = 0
x = 1

print("\nUsing While loop")
while i < N:
    print(x, end=" ")
    sum2 += x
    x += 1
    i += 1

print("\nThe Sum is:", sum2)