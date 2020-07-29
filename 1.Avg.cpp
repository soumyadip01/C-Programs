//Assigment 1
//C Program to calculate the average of three given numbers
#include<stdio.h>
main()
{
	int x,y,z;
	float avg;
	printf("Enter three number : ");
	scanf("%d%d%d",&x,&y,&z);
	avg=(x+y+z)/3.0;
	printf("Average of three numbers : %f",avg);
}
