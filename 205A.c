#include <stdio.h>
int main(){
    long long int n,d;
    int i,min,index;
    scanf("%lld\n",&n);
    scanf("%lld",&d);
    min=d;
    index=1;
    
    for(i=2; i<=n;i++){
        scanf("%lld",&d);
        if(d<min){
            min=d;
            index=i;
            
        }
        else if(min==d){
            index=0;
        }
        
    }
    if(index==0){
        printf("Still Rozdil");
        
    }
    else{
        printf("%d",index);
    }
}   