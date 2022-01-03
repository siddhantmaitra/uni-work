def reverse(string): 
    string = string[::-1] 
    return string 
    
def reversefwd(string): 
  str = "" #empty string
  for i in string: 
    str = i + str
  return str
  
s = input("Enter the string: ")
  
print ("The original string  is : ",end="") 
print (s) 
  
print ("The reversed string is : ",end="") 
print (reverse(s)) 

  
print ("The reversed string is : ",end="") 
print (reversefwd(s)) 