#include <stdio.h>
int main()
{
    long long a,n;
    int count = 0;
    scanf("%lld", &n);

    while(n != 0)
    {
        a=n%10;
        n /= 10;
        if(a==4 || a== 7){
            ++count;
        }
        
    }

    if(count==4 || count== 7) printf("YES");
    else printf("NO");
}