#include<stdio.h>
#include<stdlib.h>
main()
{
 char st[30];
 printf("Enter a string: ");
 gets(st);
 int n=atoi(st);
 printf("%d",n);
}