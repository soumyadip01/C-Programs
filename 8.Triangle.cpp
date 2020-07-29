//Assigment 8
//C Program to check if a triangle is equilateral, isosceles or scalene
#include<stdio.h>
main()
{
	int x,y,z;
	printf("Enter three sides of triangle : ");
	scanf("%d%d%d",&x,&y,&z);
	if((x+y)>z && (y+z)>x && (z+x)>y)
	{
		if(x==y && y==z) //If all sides are equal
		 printf("Equilateral traingle");
		else if(x==y || y==z || z==x) //If any two sides are equal
		 printf("Isosceles triangle");
		else //If no sides are equal
		 printf("Scalene triangle");
	}
	else
	 printf("Triangle is not possible");
}
