#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct student 
{
   char name[20];
   char strem[20];
   char department[20];
   int roll;
} stud;
 
void main() 
{
   stud s[3],temp;
   int i,j;
   for (i=0;i<3;i++)
   {
      printf("Enter Student Name :");
      fflush(stdin);
      gets(s[i].name);
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
   for(i=0;i<3;i++)
   {
   	 for(j=0;j<3-i;j++) 
     {
       if(s[j].name>s[j+1].name)
       {
         temp=s[j];
         s[j]=s[j+1];
         s[j+1]=temp;
       }
     }  
   }  
   for (i=0;i<3;i++) 
   {
      printf("Student Name :%s\n",s[i].name);
      printf("Strem Name :%s\n",s[i].strem);
      printf("Depertment Name :%s\n",s[i].name);
      printf("Roll No. :%d\n",s[i].name);
   }
   getch();
}
