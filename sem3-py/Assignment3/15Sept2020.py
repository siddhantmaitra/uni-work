#S=1+2+3+...N
n=int(input("ENTER VALUE OF N: "))
s1=0
s2=0

#Python Example-1(For Loop)
#for i in range(n):
#for i in range(1,n+1):
for i in range(1,n+1,2):
#for i in range(n,0,-1):
    print(i)
    s1=s1+i
    
#Python Example-2(While Loop)
i = 1
while i <= n:
  print(i,end=" ")
  s2=s2+i
  i += 2


print("\n\tSum of the series is S1= ",s1,"S2= ",s2)

"""

#Example of "Break","Continue","Pass" Statement in Python
n = 0
for n in range(10):
    if n == 5:
        #break    
        #continue
        pass
    print("\tNumber is = " , n)
    
else:
    print("\nOut of the Loop / Finished Loop\n")
"""