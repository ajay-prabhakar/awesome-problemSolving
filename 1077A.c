#include<stdio.h>
int main(){
  long long n,i,a,x,y,k;
  i=0;
  scanf("%lld",&n);
  while(i<n){
    scanf("%lld %lld %lld",&a,&x,&y);
    
    if(y%2!=0){
      k=(((y/2)+1)*a)-((y/2)*x);
      printf("%lld\n",k);
    }
    else{
      k=((y/2)*a)-((y/2)*x);
      printf("%lld\n",k);


    }
    i++;
    

  }

  return 0;
}
