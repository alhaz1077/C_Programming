#include<stdio.h>
int main()
{
    float days,year,weak,day;
    printf("Enter days :");
    scanf("%f",&days);

    year = days/365;
    printf("Year = %f\n",year);

    weak = days/7;
    printf("Weak = %f\n",weak);

    day = days/1;
    printf("Day = %f\n",day);

    return 0;
}
