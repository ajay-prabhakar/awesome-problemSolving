#include<stdio.h>
int main(){
long long int dis;
scanf("%lld",&dis);
if(dis%5==0){
printf("%lld",dis/5);
}
else{
dis=dis/5+1;
printf("%lld",dis);
}

  return 0;
}
