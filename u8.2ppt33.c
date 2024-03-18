#include<stdio.h>

int main()
{
	int n,i;
	
	printf("enter the number n=");
	scanf("%d",&n);
	
	int num[n];
	
	for(i=0;i<n;i++)
	{
	     printf("num[%d]= ",i);
		 scanf("%d",&num[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("square of %d is %d\n",num[i],num[i]*num[i]);
	}
}
