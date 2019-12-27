#include<stdio.h>
int main()
{
long long int a,i,p,q,r,s,sm,x,count=0;
scanf("%lld",&a);

for(i=1;i<=a;i++){
    scanf("%lld %lld %lld %lld",&p,&q,&r,&s);
    sm=p+q+r+s;
    if(i==1){
        x=sm;
    }

    if(sm>x){
        count=count+1;
    }
    
}
printf("%lld",count+1);

  return 0;
}