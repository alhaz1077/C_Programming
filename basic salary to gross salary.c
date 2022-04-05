#include<stdio.h>
int main()
{
    int basic_salary;
    float total_salary,HRA,DA;
    printf("Enter a value ");
    scanf("%d",&basic_salary);

    if(basic_salary>=10000)
    {
        HRA=basic_salary*0.2;
        DA=basic_salary*0.8;
        total_salary=basic_salary+HRA+DA;

        printf("HRA = %f\n",HRA);
        printf("DA = %f\n",DA);
        printf("total_salary = %f\n",total_salary);
    }

    else if(basic_salary>=20000)
    {
        HRA=basic_salary*0.25;
        DA=basic_salary*0.9;
        total_salary=basic_salary+HRA+DA;

        printf("HRA = %f\n",HRA);
        printf("DA = %f\n",DA);
        printf("total_salary = %f\n",total_salary);

    }
    else if(basic_salary>=30000)
    {
        HRA=basic_salary*0.3;
        DA=basic_salary*0.95;
        total_salary=basic_salary+HRA+DA;

        printf("HRA = %f\n",HRA);
        printf("DA = %f\n",DA);
        printf("total_salary = %f\n",total_salary);

    }
    else
    {
        printf(" under 10k");
    }


    return 0;
}
