//Assigment 3
//C Program to check if a given number is even or odd
#include<stdio.h>
main()
{
	int n,r;
	printf("Enter a number : ");
	scanf("%d",&n);
	r=n%2;
	if(r==0)
	 printf("%d is even",n);
	else
	printf("%d is odd",n);
}
