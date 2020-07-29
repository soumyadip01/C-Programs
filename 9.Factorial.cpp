//Assigment 9
//C Program to calculate the factorial of a number
#include<stdio.h>
main()
{
	int n,i,f=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	 f=f*i;
	printf("Factorial of %d is %d",n,f);
}
