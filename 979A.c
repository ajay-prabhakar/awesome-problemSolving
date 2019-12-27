#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    if(n==0){
        printf("%d",0);
    
    }
    if(n!=0){
    n=n+1;
     if(n%2==0){
        printf("%lld",n/2);
    }
    else{
        printf("%lld",n);
    }

    }
    


}   