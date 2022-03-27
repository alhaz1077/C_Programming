#include <stdio.h>

int main()
{
    char num[520];
    double seller_salary,total_sell,total_salary;

    scanf("%s %lf %lf",&num,&seller_salary,&total_sell);
    total_salary=seller_salary+(0.15*total_sell);

    printf("TOTAL = R$ %.2lf\n",total_salary);

    return 0;
}
