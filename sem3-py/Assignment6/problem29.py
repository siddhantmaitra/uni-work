# to find the GCD & LCM of two given numbers using function

def compute_gcd(x, y):

    while(y):
        x, y = y, x % y
    return x

def compute_lcm(x, y):
    lcm = (x*y)//compute_gcd(x,y)
    return lcm

key = int(input("Press \n \t 1 for gcd \n \t 2 for lcm \n : "))
num1 = int(input("enter first number: "))
num2 = int(input("enter second number: "))
if key ==1:
    print("The gcd is", compute_gcd(num1, num2))
elif key ==2:
    print("The lcm is", compute_lcm(num1, num2))
else:
    print("Invalid choice!")