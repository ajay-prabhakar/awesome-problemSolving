a = int(input())
count = 0
for i in range(0, a):
    n = int(input())
    count = 0
    while(True):
        if(n == 1):
            print(count)
            break
        else:
            if(n % 2 == 0):
                n = n//2
                count += 1
            elif(n % 3 == 0):
                n = (2*n)//3
                count += 1
            elif(n % 5 == 0):
                count += 1
                n = (4*n)//5
            else:
                print("-1")
                break
