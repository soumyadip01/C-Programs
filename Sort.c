/*C Program to store student records as a structure and short them by name*/
#include<stdio.h>
#include<conio.h>
struct student 
{
   char name[20];
   char strem[20];
   char department[20];
   int roll;
}s[10],temp;
void main()
{
    int n,i,j,k=0,max;
    printf("Enter number of students :");
    scanf("%d",&n);
    printf("Input All Students's Records\n");
    printf("----------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("Enter records of student :%d\n",i+1);
        printf("Enter student name :");
        fflush(stdin);
        gets(s[i].name);
        for(k=0;s[i].name[k]!='\0';k++)
        {
            if(i==0)
            max=k;
        }
        if(k>max)
        max=k;
        printf("Enter Strem Name :");
        fflush(stdin);
        gets(s[i].strem);
        printf("Enter Department Name :");
        fflush(stdin);
        gets(s[i].department);
        printf("Enter Roll No. :");
        scanf("%d",&s[i].roll);
        printf("\n");	
    }
    for(k=0;k<max;k++)
    {
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {       
  	            if(s[j].name[k]==s[i].name[k]||k==0)
  	            {
                    if(s[j].name[k]<s[i].name[k]&&s[j].name[k]!='\0'&&s[i].name[k]!='\0')
                    {
                        temp=s[j];
                        s[j]=s[i];
                        s[i]=temp;
                    }
                }
            }
        }
    }    
    printf("Sorted Students's Records By Name\n");
    printf("---------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("Student Name :%s\n",s[i].name);
        printf("Strem Name :%s\n",s[i].strem);
        printf("Depertment Name :%s\n",s[i].department);
        printf("Roll No. :%d\n",s[i].roll);
        printf("\n");
    }
	getch();  
}
