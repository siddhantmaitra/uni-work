#to find number of palindromes in a given range
lower= int(input("Enter the lower limit: "))
upper= int(input("Enter the upper limit: "))

count=0
print("Palindrome Numbers in the given range are: ")
for num in range(lower, upper + 1):
    temp = num
    reverse = 0
    
    while(temp > 0):
        Reminder = temp % 10
        reverse = (reverse * 10) + Reminder
        temp = temp //10

    if(num == reverse):
        print("%d " %num, end = '  ')
        count=count+1

print("\nNumber of palindromes found: ", count)