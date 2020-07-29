#include <stdio.h>
void main()
{
    int number, i;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    printf("Factors of %d :", number);
    for(i=2; i < number; ++i)
    {
        if (number%i == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
