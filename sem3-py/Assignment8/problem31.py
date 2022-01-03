#Password Criteria Checker 
ucount=0  #upper
lcount=0  #lower
ncount=0  #numbers
password=input("Create a password with:\n\t8 characters\n\tAt least 1 Uppercase\n\tAt least 1 Lowercase\n\tAt least 1 digit \nENTER: \n")

if(len(password)>=8):
  for i in password:
    if i.isupper():
      ucount+=1
    elif i.islower():
      lcount+=1
    elif i.isdigit():
      ncount+=1
  if (ucount>=1 and ncount>=1 and lcount>=1):
    print("Password meets criterias. ")
    print("Password successfully created.")
  else:
    print("Criterias not met.Try again.")
else:
    print("Criterias not met.Try again.")  
    

