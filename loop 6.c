#include<stdio.h>
int main()
{
    int num, i, tab;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("\nTable of %d is:\n", num);

    for(i=1; i<=10; i++)
    {
        tab = num*i;
        printf("%d * %d = %d\n", num, i, tab);
    }

    return 0;
}
