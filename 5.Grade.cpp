//Assigment 5
//C Program to input marks of five subects to calculate perentage and grade
#include<stdio.h>
main()
{
	int phy,chem,math,bio,comp,total;
	float perc;
	printf("Enter marks of Physics : ");
	scanf("%d",&phy);
	printf("Enter marks of Chemistry : ");
	scanf("%d",&chem);
	printf("Enter marks of Math : ");
	scanf("%d",&math);
	printf("Enter marks of Biology : ");
	scanf("%d",&bio);
	printf("Enter marks of Computer Sc : ");
	scanf("%d",&comp);
	total=phy+chem+math+bio+comp;
	perc=total/5.0;
	printf("Percentage %.2f\n",perc);
	if(perc>=90)
	 printf("Grade A");
	else if(perc>=80)
	 printf("Grade B");
	else if(perc>=70)
	 printf("Grade C");
	else if(perc>=60)
	 printf("Grade D");
	else if(perc>=40)
	 printf("Grade E");
	else
	 printf("FAIL");
}
