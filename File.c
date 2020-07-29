/*C Program to Open a file, Write in it and Close the file 
and to Open a file, Read from it and Close the file*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emmploye
{
	char id[10];
	char name[20];
	int age;
	char post;
};
void main()
{
	//File pointer declared
	FILE *fp;
	struct emmploye emp;
	int i;
	fp=fopen("Emmploye.txt","ab");
	printf("Enter emmploye's ID :");
    scanf("%s",&emp.id);
    printf("Enter emmploye's name :");
    fflush(stdin);
    gets(emp.name);
    printf("Enter emmploye's age :");
    scanf("%d",&emp.age);
    printf("Enter emmploye's post :");
    fflush(stdin);
    scanf("%c",&emp.post);
    //fwrite() function is used to write a block into a file
	fwrite(&emp,sizeof(emp),10,fp);
    fclose(fp);
    printf("\n");
    fp=fopen("Emmploye.txt","r");
    //fread() function is used to read a bolck of stream
    while((fread(fp,sizeof(emp),10,&emp)!=EOF))
    {
    	printf("Emmploye's ID :%s\n",emp.id);
    	printf("Emmploye's name :%s\n",emp.name);
    	printf("Emmploye's age :%d\n",emp.age);
    	printf("Emmploye's post :%c",emp.post);	
	}
	fclose(fp);
    getch();
}
