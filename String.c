/*C Program to Compare two strings, Copy one string to another string, 
Concatenate two strings and Convert a string in Lower Case to Upper Case and 
vice-versa*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str1[100],str2[100];
  int i,j,x,y;
  printf("Enter choice :");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
    	printf("Enter first string :");
    	fflush(stdin);
        gets(str1);
        printf("Enter second string :");
        fflush(stdin);
        gets(str2);
        i=0;
        while(str1[i]==str2[i]&&str1[i]!='\0')
        {
            i++;
        }
        if(str1[i]>str2[i])
        printf("str1 is greater than str2 (str1>str2).");
        else if(str1[i]<str2[i])
        printf("str1 is less than str2 (str1<str2).");
        else
        printf("str1 is equal to str2 (str1=str2).");
        break;
    case 2:
	    printf("Enter a string :");
	    fflush(stdin);
		gets(str1); 
		for(i=0;str1[i]!='\0';i++)
        {
            str2[i]=str1[i];
        }
        str2[i]='\0';
        printf("Copied string :%s",str2);
        break;
    case 3:
	    printf("Enter first string :");
	    fflush(stdin);
        gets(str1);
        printf("Enter second string :");
        fflush(stdin);
        gets(str2);
        i=strlen(str1);
        str1[i]=' ';
	    for(i=i+1,j=0;str2[j]!='\0';j++,i++)
		{
			str1[i]=str2[j];
		}
		str1[i]='\0';
		printf("Concatenated string :%s",str1);  
		break;  
	case 4: 
	    printf("Enter choice :");
	    scanf("%d",&y);
		switch(y)
		{
			case 1:
				printf("Enter a lower case string :");
				fflush(stdin);
				gets(str1);
				for(i=0;str1[i]!='\0';i++)
				{
					if(str1[i]>='a'&&str1[i]<='z')
					str1[i]=str1[i]-32;  
				}
				printf("Converted upper case string :%s",str1);
				break;
			case 2:
				printf("Enter a upper case string :");
				fflush(stdin);
				gets(str2);
				for(i=0;str2[i]!='\0';i++)
				{
					if(str2[i]>='A'&&str2[i]<='Z')
					str2[i]=str2[i]+32;  
				}
				printf("Converted lower case string :%s",str2);
				break;
			default:
				printf("Invalid");
				break;
		}
		break;	    
	default:
	    printf("Invalid");
		break;	  
  } 
  getch();
}
