a = int(input())
for i in range(0, a):
    n = int(input())
    n=n/2
    if(n%2==1):
        print("Not Accepted")
    elif(n==2):
        print("Not Accepted")
    else:
        print("Accepted")