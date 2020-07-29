/*C Program to input upto four digit number and express the number in word*/
#include<stdio.h>
#include<conio.h>
//Prototype declaration of void function
void express(long int,char ch[]);
//Global variables declaration
char *one[]={"","One","Two","Three","Four","Five",
"Six","Seven","Eight","Nine","Ten","Eleven",
"Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen",
"Eighteen","Nineteen"};
char *ten[]={"","","Twenty","Thirty","Forty",
"Fifty","Sixty","Seventy","Eighty","Ninety"};
void main()
{
 //Local variable in main 	
 long int n;
 // Enter a positive integer
 printf("Enter a number upto 4 digit or less :");
 scanf("%ld",&n);
 if(n==0)
 printf("Zero");
 else if(n<0||n>=10000)
 printf("Invalid number");
 else if(n<=9999)
 {
    //Call function to express the number in word
    express(((n/1000)%100),"Thousand");
    express(((n/100)%10),"Hundred");
    express((n%100)," ");
 }
 getch();
}
//Function to express the number in word
void express(long int n,char ch[])
{
 (n>19)?printf("%s %s",ten[n/10],one[n%10]):printf("%s ",one[n]);
 if(n)
 //Printing the word
 printf("%s ",ch);
}
