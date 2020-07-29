//Assigment 4
//C Program to perform all arithmatic operations on two variable
#include<stdio.h>
main()
{
	int x,y,sum,sub,div,mul;
	printf("Enter two numbers : ");
	scanf("%d%d",&x,&y);
	sum=x+y; sub=x-y;
	div=x/y; mul=x*y;
	printf("%d+%d=%d\n",x,y,sum);
	printf("%d-%d=%d\n",x,y,sub);
	printf("%d/%d=%d\n",x,y,div);
	printf("%d*%d=%d",x,y,mul);
}
