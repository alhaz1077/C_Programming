#include <stdio.h>

int main()
{
    int i, j, end, isPrime;

    printf("Find prime numbers between 1 to ");
    scanf("%d", &end);

    for(i=2; i<=end; i++)
    {
        isPrime = 2;

        for(j=2; j<=i/2; j++)
        {

            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime==2)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
