#include<stdio.h>
int main()
{
    float radious,diameter,circumference,area;
    printf("Etner the radious value :");
    scanf("%f",&radious);

    diameter = 2*radious;
    printf("Diameter is = %.2f\n",diameter);

    circumference = 2*3.1416*radious;
    printf("Circumference = %.2f\n",circumference);

    area = 3.1416*radious*radious;
    printf("Area is = %.2f\n",area);

    return 0;
}
