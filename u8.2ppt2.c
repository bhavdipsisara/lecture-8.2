#include<stdio.h>

int main()
{
	int m,n,i;
	
	printf("enter start year m=");
	scanf("%d",&m);
	
	printf("enter end year n=");
	scanf("%d",&n);
	
	int array [100],l=0;
	
	for(i=m;i<=n;i++)
	{
		if(i%4==0)
		{
		      array[l]=i;
	       	  l++;
		}
	}
	for(i=0;i<l;i++)
	{
	     printf("arrya[%d]=%d\n",i,array[i]);	
	}
	
}