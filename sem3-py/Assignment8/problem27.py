#program should create a new string by shifting one position to left

string = input("Enter a string:") 

new_string = string[1:] + string[0] 

print("String after left shift: ", new_string)

