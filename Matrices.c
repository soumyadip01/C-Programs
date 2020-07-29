/*C Program to multiply two Matrices*/ 
#include <stdio.h>
#include<conio.h> 
void main()
{   
int i,j,m,n,l,k;       
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
    scanf("%d %d",&n,&l);
    printf("Enter the elements of second Matrix :"); 
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        scanf("%d",&b[i][j]);
    }    
    //*Loop to multiply of two Matrices 
    for(i=0;i<m;i++) 
    {
        for(j=0;j<l;j++) 
        {
            c[i][j]=0;
            for(k=0;k<n;k++) 
	        c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }   
    }        
    //*Loop to print resultant of Matrix multiplication
    printf("Resultant of multiplication of the two Matrices :\n");
    for(i=0;i<m;i++)
    {
        for (j=0;j<l;j++)
        printf("%6d",c[i][j]);
        printf("\n");
    }   
    getch(); 
}   
