/*C Program to add two Matrices*/ 
#include <stdio.h>
#include<conio.h> 
void main()
{   
int i,j,m,n;       
int a[10][10],b[10][10],c[10][10];
//*Loop to read values of first Matrix 
printf("Enter number of rows and columns of first Matrix :");
scanf("%d %d",&m,&n);
printf("Enter the elements of first Matrix :");
for(i=0;i<m;i++)
    {   
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }   
    //*Loop to read values of second Matrix
    printf("Enter number of rows and columns of second Matrix :");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of second Matrix :"); 
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }    
    //*Loop to add of two Matrices 
    for(i=0;i<m;i++) 
    {
        for(j=0;j<n;j++) 
        {
            c[i][j]=0;
	        c[i][j]=c[i][j]+a[i][j]+b[i][j];
        }   
    }        
    //*Loop to print resultant of Matrix addition
    printf("Resultant of addition of the two Matrices :\n");
    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        printf("%6d",c[i][j]);
        printf("\n");
    }   
    getch(); 
}   
