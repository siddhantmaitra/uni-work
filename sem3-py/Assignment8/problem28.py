#Print initials of a person's name 


def Initials(str):  
    
    print(str[0].upper( ), end=". ")
      
    for i in range(0, len(str)): 
        if (str[i] == ' '): 
            y = str[i + 1].upper( )
            print(y, end=". ")
    
str = input("Provide a name:")

Initials(str)

#Write a python code to print the string "Netaji Subhash Chandra Bose" as "N.S.C. Bose"
FullName = input("Please Provide A Name: \n")
namepart = FullName.split()

print("\nThe shortened name is: ")
for i in range(0, len(namepart)):
    if i < len(namepart) - 1:
        
        print(namepart[i][0], end=". ") 
    else:
        print(namepart[i]) 
