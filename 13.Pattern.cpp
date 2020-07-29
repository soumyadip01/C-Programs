//Assigment 13
//C Program to print diamond pattern with stars 
#include<stdio.h> 
main()
{
	int n,space,i,j;
	printf("Enter no. of rows : ");
	scanf("%d",&n);
	space=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<space;j++)
		 printf(" ");
		for(j=0;j<=i;j++)
		 printf("* ");
		printf("\n");
		space--;
	}
	space=1;
	for(i=n;i>0;i--)
	{
		for(j=0;j<space;j++)
		 printf(" ");
		for(j=0;j<i-1;j++)
		 printf("* ");
		printf("\n");
		space++;
	}
}
