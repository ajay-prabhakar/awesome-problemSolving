#include<stdio.h>
int main(){
	int a,b,i=0;
	scanf("%d %d",&a,&b);
	while((a*100+b*10)>=220){
		if(i==0){
			if(a>=2&&b>=2){
				a=a-2;
				b=b-2;
				i=1;
			}
			else if(a>=1&&b>=12){
				a=a-1;
				b=b-12;
				i=1;
			}
			else if(b>=22){
				b=b-22;
				i=1;
			}
			else break;
		}
		else{
			if(b>=22){
				b=b-22;
				i=0;
			}
			else if(a>=1&&b>=12){
				a=a-1;
				b=b-12;
				i=0;
			}
			else if(a>=2&&b>=2){
				a=a-2;
				b=b-2;
				i=0;
			}
			else break;
		}
	}
	if(i==0)printf("Hanako");
	else printf("Ciel");
	return 0;
}