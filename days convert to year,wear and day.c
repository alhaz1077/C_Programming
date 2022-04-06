#include<stdio.h>
int main()
{
    int days,year,weak;
    printf("Enter some days :");
    scanf("%d",&days);

    year = days / 365;
    printf("Year = %d\n",year);
    days = days-(year*365);

    weak = days / 7;
    printf("Weak = %d\n",weak);
    days = days-(weak*7);

    printf("Day =%d",days);


    return 0;
}
