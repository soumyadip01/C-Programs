//Assigment 10
//C Program to find if a given number is prime or not
#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		 c++;
	}
	if(c==2)
	 printf("%d is prime",n);
	else
	 printf("%d is not prime",n);
}
