#include <stdio.h>

int main()

{   long long int a, i , s=1,b=1;
    char ch;
    scanf("%lld\n",&a);
    
    
    for(i=1;i<=a;i++){
        scanf("%c",&ch);
        if(b==i){
            printf("%c",ch);
            s=s+1;
            b=b+s;
        }

        
    }
    
}