#include<stdio.h>
int main()
{
    float first_angle,second_angle,third_angle;
    printf("Enter the first angle :");
    scanf("%f",&first_angle);

    printf("Enter the second angle :");
    scanf("%f",&second_angle);

    ///we know triangle all angle = 180 degree

    third_angle = 180-(first_angle+second_angle);

    printf("Third angle is = %.2f\n",third_angle);

    return 0;
}
