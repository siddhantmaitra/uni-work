# To print the sum of the series of 1 + 1/2 + 1/4 + 1/8 + 1/16 +.........1/2^N(Input N)
N = int(input("Enter the value of N for 2^N: "))

print("Using for Loop:")
sum1 = 0
for i in range(N+1):
    print(str(1) + "/" + str(2**i), end=" + ")
    sum1 += 1/(2**i)
print("\nThe Sum is:", sum1)


print("Using while Loop:")
i = 0
sum2 = 0
while i <= N:
    print(str(1) + "/" + str(2**i), end=" + ")
    sum2 += 1/(2**i)
i += 1
print("\nThe Sum is:", sum2)