#include<stdio.h>
int main()
{
    float celcious,fahrenheit;
    printf("Enter the value of celcious :");
    scanf("%f",&celcious);

    fahrenheit = (celcious*9)/5+32;
    printf("Temperature of fahrenheit = %.2f\n",fahrenheit);


    return 0;
}
