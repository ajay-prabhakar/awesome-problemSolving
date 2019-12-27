#include<stdio.h>
int main()
{
	int n,j=0,c=0,t=0;
	scanf("%d",&n);
	int arb[n],a[n],b[n],C[n];
	for(int i=0;i<n;i++)
	 {
	  scanf("%d",&arb[i]);
	  if(arb[i]<0)
	    {
	      a[c]=arb[i];
	      c++;
	    }
	  else if(arb[i]>0)
	    {
	      b[j]=arb[i];
	      j++;
	    }
	  else
	    {
	      C[t]=arb[i];
	      t++;
	    }
	}
	  if(j==0)
	      {
	       b[j]=a[c-1];
	       b[j+1]=a[c-2];
	       j+=2;
	       c=c-2;
	      }
	   if(c%2==0)
	   {
	     C[t]=a[c-1];
	     t++;
	     c--;
	   }   
	           
	  printf("%d\t",c);
	  for(int k=0;k<c;k++)
	   printf("%d\t",a[k]);
	  printf("\n%d\t",j);
	  for(int k=0;k<j;k++)
	   printf("%d\t",b[k]);
	  printf("\n%d\t",t);
	  for(int k=0;k<t;k++)
	   printf("%d\t",C[k]);
	  return 0;
}