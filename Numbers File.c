/*C Program to Read the numbers from a file called DATA and then write all
even numbers to a file called EVEN and all odd numbers to a file called ODD*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp,*fp1,*fp2;
	int numbers[10],i,n;
	char ch,ch1,ch2;
	fp=fopen("DATA.txt","w");
	printf("Write Numbers In DATA File\n");
	printf("--------------------------\n");
	printf("Enter numbers :");
	for(i=0;i<10;i++)
	{
	    scanf("%d",&numbers[i]);
	    fprintf(fp,"%d ",numbers[i]);
    }   
	fclose(fp);
    fp=fopen("DATA.txt","r");
	fp1=fopen("EVEN.txt","w");
	fp2=fopen("ODD.txt","w");
	while((fscanf(fp,"%d",&n))!=EOF)
	{
		if(n%2==0)
		fprintf(fp1,"%d ",n);
		else
		fprintf(fp2,"%d ",n); 
	}
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	printf("\n");
	//Open three files for reading numbers
    fp=fopen("DATA.txt","r");
    fp1=fopen("EVEN.txt","r");
    fp2=fopen("ODD.txt","r");
    printf("Read All Numbers From Separated Files\n");
    printf("-------------------------------------\n");
    printf("DATA File\n");
    printf("---------\n");
    printf("Numbers :");
	while(1)
    {    
	    ch=fgetc(fp); 
        if(ch==EOF)
		break;
		printf("%c",ch);		
	}
	printf("\n");
	printf("\n");
	printf("EVEN File\n");
	printf("---------\n");
    printf("Even numbers :");
	while(1)
    {    
	    ch1=fgetc(fp1); 
        if(ch1==EOF)
		break;
		printf("%c",ch1);	
	}
	printf("\n");
	printf("\n");
	printf("ODD File\n");
	printf("---------\n");
    printf("Odd numbers :");
	while(1)
    {    
	    ch2=fgetc(fp2); 
        if(ch2==EOF)
		break;
		printf("%c",ch2);		
	}
	//Close all files     
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	getch();
}
