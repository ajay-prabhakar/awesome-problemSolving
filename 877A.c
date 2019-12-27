#include<stdio.h>
#include<string.h>
int check(char[],char[]);
int main(){
char s[100];
 char name[100][100]={"Danil", "Olya", "Slava", "Ann", "Nikita"};
 int i,j,k,l1,l2,c=0; 
 scanf("%s",&s);
l1=strlen(s);
 for(i=0;i<5;i++)
   {
   	l2=strlen(name[i]);
   	for(j=0;j<l1-l2+1;j++)
   	{
   		int f=1;
   		for(k=0;k<l2;k++) if(s[j+k] != name[i][k]) f=0;
   		
   		if(f) c++;
	   }
   }

if(c==1) printf("YES");
else printf("NO");

}