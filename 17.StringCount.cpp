//Assigment 17
//C Program to count no. of alphabets, digits and special characters
#include<stdio.h>
main()
{
	char s[100];
	int i=0,alp=0,dig=0,spl=0;
	printf("Enter a string : ");
	gets(s);
	while(s[i]!='\0')
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		 alp++;
		else if(s[i]>='0' && s[i]<='9')
		 dig++;
		else
		 spl++;
		i++;
	}
	printf("\nNo. of alphabets : %d",alp);
	printf("\nNo. of digits : %d",dig);
	printf("\nNo. of special characters : %d",spl);
}
