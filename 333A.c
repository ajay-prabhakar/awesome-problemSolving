 #include<stdio.h>
int main(){
long long int t,n,now,a=1;
scanf("%lld",&n);
now=n;
while(now!=0){
   if(now%a!=0){
      break;
   }
   else a*=3;
}
t=now/a+1;
printf("%lld",t);
}