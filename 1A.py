n, m, a = map(int, input().split())
x=n//a
y=m//a
if(n%a==0):
    x=x
elif(n%a!=0):
    x=x+1
if(m%a==0):
    y=y
elif(m%a!=0):
    y=y+1   
print(x*y)