n,a = map(int, input().split())

ar=[]

count=0

ar=list(map(int,input().split()))


for i in range(0,n-1):

    if((ar[i+1]-ar[i])==2*a):

        count=count+1

    

    elif(ar[i+1]-ar[i]>2*a):

        count=count+2

         
count=count+2

print(count)

         

    
