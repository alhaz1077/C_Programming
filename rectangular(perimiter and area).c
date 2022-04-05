#include<stdio.h>
int main()
{
    float length,breadth,perimeter,area;
    printf("Enter the length :");
    scanf("%f",&length);

    printf("Enter the breadth :");
    scanf("%f",&breadth);

    perimeter = 2*(length+breadth);
    printf("Perimeter is = %.2f\n",perimeter);

    area = length*breadth;
    printf("Area is = %.2f\n",area);

    return 0;
}
