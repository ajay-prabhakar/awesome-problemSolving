a=int(input())
for i in range(0,a):
    n=input()
    if(len(n)>10):
        print(n[0]+str(len(n)-2)+n[-1])
    else:
        print(n)