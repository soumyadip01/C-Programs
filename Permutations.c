/*C program to print all permutations of a given string using pointer*/ 
#include<stdio.h> 
#include<conio.h>
#include<string.h> 
//Function to swap values at two pointers
void swap(char *x,char *y) 
{ 
	char temp; 
	temp=*x; 
	*x=*y; 
	*y=temp; 
} 
// Function to print permutations of string 
void permut(char *a,int n,int r) 
{ 
	int i; 
	if(n==r) 
	printf("%s ",a); 
	else 
	{ 
		for (i=n;i<=r;i++) 
		{ 
			swap((a+n),(a+i)); 
			permut(a,n+1,r); 
			swap((a+n),(a+i)); 
		} 
	} 
} 
//Driver program to test above functions
void main() 
{ 
	char str[50];
	printf("Enter a string :");
	gets(str);
	int p=strlen(str); 
	printf("Printed all permutations of this string :\n");
	permut(str,0,p-1); 
	getch();
} 
