#Counting vowels in a string

def countvowels(string):
    num_vowels=0
    for char in string:
        if char in "aeiouAEIOU":
           num_vowels = num_vowels+1
    return num_vowels


str=input("Please enter a word: ")

print("\nGiven: ",str)
print("\nThe amount of vowels present: ",countvowels(str))