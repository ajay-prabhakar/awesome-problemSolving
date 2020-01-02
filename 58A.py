s = input()
arr = ['h', 'e', 'l', 'l', 'o']
k = 0
flag = 0
for i in range(0, len(s)):
    if(s[i] == arr[k]):
        k = k+1
        if(k == 5):
            break

if(k == 5):
    print("YES")
else:
    print("NO")
