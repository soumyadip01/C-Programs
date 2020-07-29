//Assigment 15
//C Program to reverse the entered string
#include<stdio.h> 
main()
{
	char s[100],r[100];
	int l=0,i,j;
	printf("Enter a string : ");
	gets(s);
	while(s[l]!='\0')
	 l++;
	j=l-1;
	for(i=0;i<l;i++)
	{
		r[i]=s[j];
		j--;
	}
	r[i]='\0';
	printf("Reversed string : %s",r);
}
