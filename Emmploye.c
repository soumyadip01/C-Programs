#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emmploye
{
	int id;
	char name[20];
	int age;
	char gender;
	char post[20];
};
void main()
{
	//File pointer declared
	FILE *fp;
	char ch;
	struct emmploye emp;
	fp=fopen("Emmploye.txt","w");
	//Open Emmploye file to write details
	printf("Write Emmploye's All Details In Emmploye File\n");
	printf("---------------------------------------------\n");
	printf("Enter emmploye's ID :");
    scanf("%d",&emp.id);
    printf("Enter emmploye's name :");
    fflush(stdin);
    gets(emp.name);
    printf("Enter emmploye's age :");
    scanf("%d",&emp.age);
    printf("Enter emmploye's gender :");
    fflush(stdin);
    scanf("%c",&emp.gender);
    printf("Enter emmploye's post :");
    fflush(stdin);
    gets(emp.post);
    //Print emmploye's all details 
    fprintf(fp,"Emmploye's ID :%d\n",emp.id);
	fprintf(fp,"Emmploye's name :%s\n",emp.name); 
	fprintf(fp,"Emmploye's age :%d\n",emp.age); 
	fprintf(fp,"Emmploye's gender :%c\n",emp.gender); 
	fprintf(fp,"Emmploye's post :%s",emp.post);
    fclose(fp);
    printf("\n");
    fp=fopen("Emmploye.txt","r");
    //Open this file for reading details
    printf("Read Emmploye's All Details From Emmploye File\n");
    printf("----------------------------------------------\n");
    //While loop for reading the emmploye's details from file
    while(1)
    {    
	    ch=fgetc(fp); 
        if(ch==EOF)
		break;
		printf("%c",ch);		
	}     
	fclose(fp);
    getch();
}         
