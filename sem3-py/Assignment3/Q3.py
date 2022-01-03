# To generate Fibonacci Series upto th Nth term.

N = int(input("Enter the number of terms: "))
a = 0
b = 1

if N == 1:
    print(b)
else:
    print(b, end=" + ")
    for i in range(1, N):
        c = a + b
        a = b
        b = c
        print(b, end=" + ")