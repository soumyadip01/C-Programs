/*C Program to convert length in Centimeter to Meter and Kilometer*/ 
/*C Program to convert temperature in Celsius to Fahrenheit and Kelvin*/ 
/*C Program to convert days into Years, Weeks and Days*/ 
#include<stdio.h>
#include<conio.h>
main()
{
	int nd,d,w,y,n,x;
	long int cm,m,km;
	float C,F,K;
	printf("Enter your choice :");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Enter length in Centimeter :");
			scanf("%ld",&cm);
			km=cm/100000;
			m=cm%100000;
			printf("%ld Centimeter = %ld Kilometer  %ld Meter",cm,km,m);
			break;
		case 2:
			printf("Enter temperature in degree Celsius :");
			scanf("%f",&C);
			F=((C*9)/5)+32;
			K=C+273.15;
			printf("%f Celsius = %f Fahrenheit , %f Kelvin \n",C,F,K);
	       	break;
		case 3:
			printf("Enter number of Days :");
			scanf("%d",&nd);
			y=nd/365; 
			n=nd%365;
			w=n/7; 
			d=n%7;
			printf("%d Days = %d Years %d Weeks %d Days",nd,y,w,d);
			break;
		default: 
			printf("Invalid");
			break;
	}
	getch();
}
