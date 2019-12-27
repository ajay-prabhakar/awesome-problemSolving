#include <stdio.h>
int main(){
    long long int a,b,c,n;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&n);
    if(a+b-c>n || c>a || c>b){
        printf("-1");
    }
    else{
    long long int fl=0;
    fl=a+b-c;
    fl=n-fl;
    if(fl==0){
        printf("-1");
    }
    else{
        printf("%lld",fl);
    }
    }

}   


