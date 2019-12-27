#include<stdio.h>
int main(){
	int n,a,b,i,s=0;
	scanf("%d%d%d",&n,&a,&b);
	for(i=a+1;i<=n;i++){
		if(n-i<=b)s++;
		}
		printf("%d",s);
}