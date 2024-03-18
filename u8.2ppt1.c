#include<stdio.h>

int main()
{
	int y1,y2,i,j;
	
	printf("enter arrya of y1 = ");
	scanf("%d",&y1);
	
	printf("enter arrya of y2 = ");
	scanf("%d",&y2);
	
	int a1[y1];
	int a2[y2];
	
	for(i=0;i<=y1;i++)
	{
		printf("a1[%d]=",i);
		scanf("%d",&a1[i]);
	}
	for(j=0;j<=y2;j++)
	{
		printf("a2[%d]=",j);
		scanf("%d",&a2[j]);
	}
	for(i=0;i<=y1;i++)
	{
		printf(" %d\t",a1[i]);
	}
	for(j=0;j<=y2;j++)
	{
		printf(" %d\t",a2[j]);
	}
	
}