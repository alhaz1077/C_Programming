#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter the value of base :");
    scanf("%f",&base);

    printf("Enter the value of height");
    scanf("%f",&height);

    area = 0.5*base*height;
    printf("Area is = %.2f",area);

    return 0;
}
