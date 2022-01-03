#exchange first and last letter in string 

string = input("Enter a string : ")

new_str = string[-1:] + string[1:-1] + string[:1] 

print("new string :",new_str)

