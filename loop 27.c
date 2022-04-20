#include<stdio.h>
int main()
{
    int num,n,j;
    float sum = 0.0,fact;

printf("Enter any number:");
scanf("%d",&n);
    for(num=1;num <= n;num++)
    {
       fact=1;
        for(j= 1; j <= num; j++)
        {
            fact = fact * j;
        }

        sum = sum + (num / fact);


    }

    printf("Sum of series is %f\n", sum);

    return 0;
}

