n,x1,y1=map(int,input().split())
ar=[]
for i in range(n):
    x2,y2=map(int,input().split())
    try:
        sp=(y2-y1)/(x2-x1)
    except ZeroDivisionError:
        sp="a"
    
    if sp not in ar:
        ar.append(sp)
print(len(ar))