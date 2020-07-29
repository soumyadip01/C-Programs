/*C Program that will input a string and reverse the input string*/
#include<stdio.h>
#include<conio.h> 
void main()
{
	char str1[100],str2[100];
	int i=0,j=0;
	printf("Enter a string :");
	gets(str1);
	while(str1[i]!='\0') 
	{
      if(str1[i]!=' ') 
	  {
         str2[j]=str1[i];
         j++;
      }
	  else 
	  {
         str2[j]='\0';
         printf("%s",strrev(str2));
         printf(" ");
         j=0;
      }
      i++;
    }
 
    str2[j] ='\0';
	printf("Reverse the input string :%s",strrev(str2));
	getch();
}
