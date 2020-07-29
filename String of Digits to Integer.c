/*C Program that will input a string of digits and convert the input string to integer*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int n=0,i=0;
	printf("Enter a string of digits :");
	gets(str);
	while(str[i]!='\0')
    {
		n=n*10+(str[i]-48);
		i++;
    }
	printf("Convert the input string to integer :%d",n);
	getch();
}
