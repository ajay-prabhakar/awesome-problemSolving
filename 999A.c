#include<stdio.h>
int main(){
    long long int arr[100],c,k,n;
    scanf("%lld %lld\n", &n, &k);
    for (c = 0; c < n; c++)
            scanf("%lld ", &arr[c]);
    long long int j,i,count=0;    
    for(i=0;i<n;i++){
        if(arr[i]>k){
            
            break;
        }

        count++;

    }

    for(j=n-1;j>=i;j--){
             if(arr[j]>k){


                break;
                }

        count++;
     

    }
    printf("%d  \n",count);
        
    }
    
