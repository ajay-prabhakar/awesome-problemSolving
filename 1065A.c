#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    long long int has,a,b,cost;

    long long int x,y,z;
    for(i=1;i<=n;i++){
        scanf("%lld %lld %lld %lld",&has,&a,&b,&cost);
        x=has/cost;
        y=x/a;
        y=y*b;
        z=x+y;
         printf("%lld\n",z);   
        
    }



}   