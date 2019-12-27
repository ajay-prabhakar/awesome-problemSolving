#include<stdio.h>
int main(){
long long int a,b;
scanf("%lld %lld",&a,&b);
long long int x=0;
while(b>=a){
    
    a=a*3;
    b=b*2;
    x=x+1;
}
printf("%lld\n",x);

  return 0;
}
