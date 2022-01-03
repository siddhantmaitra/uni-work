# palindrome checker 

def isPalindrome(s):
	return s[::-1]



s = input("Provide a string: ")
ans = isPalindrome(s)

if ans==s:
	print("Given string is a palindrome")
else:
	print("Given string is not a palindrome")
