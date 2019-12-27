#include<stdio.h>
int main(){
	int l,r,d,x;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("\n%d %d %d",&l,&r,&d);
		if(d<l)printf("%d\n",d);
		else{
			x=r+1;
			if(x%d==0)printf("%d\n",x);
			else printf("%d\n",((r/d)+1)*d); 
		}
	}
}