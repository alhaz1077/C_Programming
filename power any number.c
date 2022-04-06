#include<stdio.h>
int main()
{
    float number,power,value;
    printf("Enter a number :");
    scanf("%f",&number);

    printf("Enter a power :");
    scanf("%f",&power);

    value=pow(number,power);
    printf("Value is = %.2f\n",value);


    return 0;
}
