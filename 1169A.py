arr = list(map(int,input().split()))
a = arr[1]
x = arr[2]
b = arr[3]
y = arr[4]
flag = 1

while(True):
    if (a == b):
        break
    
    if (a == x or b == y): 
        flag = 0
        break	

    if (a == arr[0]):
        a = 1
    else:
        a=a+1

    if (b == 1):
        b = arr[0]
    else:
        b=b-1 

if(flag):
    print("YES")
else:
    print("NO")