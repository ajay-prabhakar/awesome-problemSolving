mystring = input()
count=0
for i in range(len(mystring) // 2):
    if mystring[i] != mystring[- 1 - i]:
        count=count+1
if(count==0):
    if(len(mystring)%2==0):
        print("NO")
    else:
        print("YES")
elif(count==1):
    print("YES")
        
else:
    print("NO")