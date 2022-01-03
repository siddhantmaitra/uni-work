
string = input("Enter a string:") 

for i in range(0,len(string)+1):
    new_string = string[i:]  +string[:i]
    print(new_string)
    
