#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d",&number);

    if(number%5==0&&number%11==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Undivisible");
    }

    return 0;
}

