//Assigment 11
//C Program to check if a given number is palindrome or not
#include<stdio.h>
main()
{
	int n,rev=0,r,x;
	printf("Enter a number : ");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10; 
	}
	if(x==rev)
	 printf("%d is palindrome",x);
	else
	 printf("%d is not palindrome",x);
}
