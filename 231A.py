n=int(input())
count=0
for i in range(0,n):
    a=input()
    if(a.count("1")>=2):
        count=count+1
print(count)
        