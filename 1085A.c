#include<stdio.h>
#include<string.h>
int main(){
    
char a[55],b[55]={'0'};

scanf("%s",a);

int l=strlen(a);int i=0,j=0,k=0,t=l-1,temp;
if(l%2==0){
    while(k<l){
        if(i%2==0){
            b[k]=a[t];
            t--;
            
        }
        else{
            b[k]=a[j];
            j++;
            
        }
        i++;
        k++;
        
    }
    
}
if(l%2!=0){
    while(k<l){
        if(i%2!=0){
            b[k]=a[t];
            t--;
            
        }
        else{
             b[k]=a[j];
        j++;
            
        }
        i++;
        k++;
        
    }
    
}

for(int i=l-1;i>=0;i--) printf("%c",b[i]);
return 0;
    
    
}