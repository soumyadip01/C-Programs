//Assigment 2
//C Program to calculate the area of a square, rectangle, triangle and circle
#include<stdio.h>
#include<math.h>
main()
{
	int s,r1,r2,t1,t2,t3,t,c,a1,a2;
	float a3,a4;
	printf("Enter side of square : ");
	scanf("%d",&s);
	printf("Enter two sides of rectangle : ");
	scanf("%d%d",&r1,&r2);
	printf("Enter three sides of triangle : ");
	scanf("%d%d%d",&t1,&t2,&t3);
	printf("Enter radius of circle : ");
	scanf("%d",&c);
	a1=s*s; a2=r1*r2;
	t=(t1+t2+t3)/2;
	a3=sqrt(t*(t-t1)*(t-t2)*(t-t3));
	a4=3.14*c*c;
	printf("Area of square is %d\n",a1);
	printf("Area of rectangle is %d\n",a2);
	printf("Area of triangle is %d\n",a3);
	printf("Area of circle is %f",a4);
}
