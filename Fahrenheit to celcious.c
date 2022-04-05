#include<stdio.h>
int main()
{
    float Fahrenheit,Celcious;
    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&Fahrenheit);

    Celcious = 5*(Fahrenheit-32)/9;
    printf("Temperature in Celcious = %.2f\n",Celcious);


    return 0;
}
