/*C Program to convert a string of digits to an integer*/
#include<stdio.h>
main()
{
	char s[100];
	int n=0,i=0;
	printf("Enter a string of Digits :");
	gets(s);
	while(s[i]!='\0')
	{
		n=n*10+(s[i]-48);
		i++;
	}
	printf("The number is %d",n);
}
