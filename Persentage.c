/*C Program to input marks of five subjects and calculate percentage and grade*/
#include<stdio.h>
#include<conio.h>
main()
{
	int phy,chem,math,bio,cmsa,total;
	float perc;
	printf("Enter marks of Physics :");
	scanf("%d",&phy);
	printf("Enter marks of Chemistry :");
	scanf("%d",&chem);
	printf("Enter marks of Mathematic :");
	scanf("%d",&math);
	printf("Enter marks of Biology :");
	scanf("%d",&bio);
	printf("Enter marks of Computer Science :");
	scanf("%d",&cmsa);
	total=phy+chem+math+bio+cmsa;
    perc=total/5.0;
	printf("Percentage = %.2f\n",perc);
	if(perc>=90)
	printf("GRADE = A");
	else if(perc>=80)
    printf("GRADE = B");
	else if(perc>=70)
    printf("GRADE = C");
	else if(perc>=60)
	printf("GRADE = D");
	else if(perc>=40)
	printf("GRADE = E");
	else
	printf("GRADE = F");
	getch();
}
