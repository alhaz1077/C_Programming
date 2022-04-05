///1 cm = 100 m
///1 km = 100000 cm
///1 km = 1000 m

#include<stdio.h>
int main()
{
    float length,miter,kilometer;
    printf("Enter the length :");
    scanf("%f",&length);

    miter = length/100;
    printf("Miter is = %.2f\n",miter);

    kilometer = length/100000;
    printf("Kilometer = %.2f\n",kilometer);


    return 0;
}
