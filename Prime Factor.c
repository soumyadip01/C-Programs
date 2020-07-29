/*Prime factors for a number using c*/
 
#include<stdio.h>
void primefactor(int);
int main()
{
    int num;
    printf("\nEnter a number:");/* enter a positive integer */
    scanf("%d",&num);
    printf("\nPrime factors are: ");
    primefactor(num);
}
void primefactor(int num)
{
	int i=1,j,k;
	while(i<=num)
    {
        k=0;
        if(num%i==0)    // checks for factor
        {
            j=1;
            while(j<=i)
            {
                if(i%j==0)
                {
                    k++;
                }
                j++;
            }
            if(k==2)            /* checks for prime factor */
                printf(" %d, ",i);
        }
        i++;
    }
}
