/*C Program that will input a string and reverse the input string*/
#include<stdio.h>
#include<conio.h> 
main()
{
	char str1[100],str2[100];
	int i,j,l=0;
	printf("Enter a string :");
	gets(str1);
	while(str1[l]!='\0')
    {
	    l++;
	    j=l-1;
    }   
	for(i=0;i<l;i++)
	{
		str2[i]=str1[j];
		j--;
	}
	str2[i]='\0';
	printf("Reverse the input string :%s",str2);
	getch();
}
