#include <stdio.h>

int main()
{
	int x,y,k, m, i, j;
	scanf("%d %d",&x, &y);
	scanf("%d %d",&k, &m);
	int a[x], b[y];
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<y;j++)
	{
		scanf("%d",&b[j]);
	}
	if (a[k-1]<b[y-m])
		
			printf("YES\n");
	else
		printf("NO\n");
	
			
	
	
	
	return 0;
}