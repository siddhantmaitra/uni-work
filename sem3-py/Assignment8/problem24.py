#Count all input type in string

space=0
ucase=0
lcase=0
digit=0

string=input("Please enter a string: ")

for i in string:
    if i==' ':
        space=space+1
    elif i.isupper():
        ucase+=1
    elif i.islower():
        lcase+=1
    elif i.isdigit():
        digit+=1
        

print("Given string: ", string)
print("Uppercase letters: ", ucase)
print("Lowercase letters: ", lcase)
print("Digits: ",digit)
print("Spaces: ", space)
