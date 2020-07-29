#include<stdio.h>

void main()
{
	int n,i,j;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<n*2-1;i++)
	 printf(" ");
	printf("1");
	printf("\n"); 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i+2;j++)
		{
			if(j==1 || j==i+2)
			 printf("1 ");
			else
			 printf("0 "); 
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
			for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i+2;j++)
		{
			if(j==1 || j==i+2)
			 printf("1 ");
			else
			 printf("0 "); 
		}
		printf("\n");
	}
	for(i=1;i<n*2-1;i++)
	 printf(" ");
	printf("1");
}
