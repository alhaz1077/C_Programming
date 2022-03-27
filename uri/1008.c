#include <stdio.h>

int main()
{

    int num,worked_hour;
    float salary_per_hour,total_salary;

    scanf("%d %d %f",&num,&worked_hour,&salary_per_hour);
    total_salary=worked_hour*salary_per_hour;

    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",total_salary);

    return 0;
}
