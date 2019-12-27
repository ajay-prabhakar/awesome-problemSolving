#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int i,a=1,b;
    if(n==1){
        printf("1");
        
    }
    else if(n==2){
        printf("2");
    }
    else{
    for(i=1;i<=n-1;i++){
        if(a+i>n){
            a=abs(n-(a+i));
            printf("%lld ",a);
        }
        else{
            a=a+i;
            printf("%lld ",a);
        }
        
        
    }
    }
    


}   