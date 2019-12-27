#include<stdio.h>
int main(){
    long long int ar[100],c,k,n,i;
    scanf("%lld \n", &n);
    for (c = 0; c < n; c++)
            scanf("%lld ", &ar[c]);
    long long int ch=0,bi=0,ba=0;
    for(i=0;i<n;i=i+3){
            ch=ch+ar[i];        
    }
     for(i=1;i<n;i=i+3){
            bi=bi+ar[i];        
    }
     for(i=2;i<n;i=i+3){
            ba=ba+ar[i]   ;     
    }
    if(ch>bi && ch>ba ) printf("chest");
    else if(bi>ch && bi >ba) printf("biceps");
    else if (ba> ch && ba>bi) printf("back");
    }
    
