#include<stdio.h>
int main()
{
long long int a,b,c;
scanf("%lld %lld %lld",&a,&b,&c);

   if(b>a){
       b=a+1;
   }   
else{
    a=b-1;
}
    if(c>b){
        c=b+1;
    }
    else{
        b=c-1;
    }
    
     if(b>a){
       b=a+1;
   }   
else {
    a=b-1;
}  
    
    


printf("%lld",a+b+c);


  return 0;
}
