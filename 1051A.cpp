#include<stdio.h>
#include<string.h>
int main(){
   int i,j,n,u=0,l=0,r=0,u1=-1,l1=-1,r1=-1,u2=-1,l2=-1,r2=-1;
   scanf("%d",&n);
   char s[100];
   for(i=1;i<=n;i++){
      scanf("%s",s);
      j=0;u=0;l=0;r=0;u1=-1;l1=-1;r1=-1;u2=-1;l2=-1;r2=-1;
      for(j=0;j<strlen(s);j++){
         if(s[j]>='0'&&s[j]<='9'){
            r++;
            if(r==2)r1=j;
            if(r==3)r2=j;
         }
         if(s[j]>='a'&&s[j]<='z'){
            l++;
            if(l==2)l1=j;
            if(l==3)l2=j;           
         }
         if(s[j]>='A'&&s[j]<='Z'){
            u++;
            if(u==2)u1=j;
            if(u==3)u2=j;
         }
      }
      if(u==0){
         if(r==0){
            s[l1]='A';
            s[l2]='0';
         }
         else if(l==0){
            s[r1]='A';
            s[r2]='a';
         }
         else if(r!=0&&l!=0){
            if(r1>-1)s[r1]='A';
            else s[l1]='A';
         }
      }
      else if(u!=0){
         if(r==0){
            if(l==0){
                  s[u1]='0';
                  s[u2]='a';
            }
            else if(l!=0){
               if(u1>-1)s[u1]='0';
               else s[l1]='0';
            }
         }
         else if(l==0&&r!=0){
            if(u1>-1)s[u1]='a';
            else s[r1]='a';
         }
      }
      printf("%s\n",s);
      if(i==n)break; 
   }
   return 0;
}