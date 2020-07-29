//Assigment 12
//C Program to convert a decimal number to binary
#include<stdio.h>
main()
{
	int n,x,r,i=1,b=0;
	printf("Enter a decimal number : ");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		b=b+r*i;
		i=i*10;
	}
	printf("The binary value of %d is %d",x,b);
}
