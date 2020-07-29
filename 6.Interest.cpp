//Assigment 6
//C Program to caculate simple and compound interest
#include<stdio.h>
#include<math.h>
main()
{
	int x;
	float p,r,t,a,i;
	printf("Press 1 for simple interest : ");
	printf("\nPress 2 for compound interest : ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Enter principle : ");
			scanf("%f",&p);
			printf("Enter rate : ");
			scanf("%f",&r);
			printf("Enter time : ");
			scanf("%f",&t);
			i=(p*r*t)/100;
			printf("interest : %.2f",i);
			break;
		case 2:
			printf("Enter principle : ");
			scanf("%f",&p);
			printf("Enter rate : ");
			scanf("%f",&r);
			printf("Enter time : ");
			scanf("%f",&t);
			a=p*(pow((1+r/100),t));
			i=a-p;
			printf("Interest : %.2f",i);
			break;
		default:
			printf("Wrong choice");
	}
}
