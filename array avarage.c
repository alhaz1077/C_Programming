#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    printf("enter 5 five number :");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<=4;i++)
    {
        sum= sum+a[i];
    }
    printf("sum is = %d\n",sum);
    printf("avg is = %.2f\n",(float)sum/5);



    return 0;
}
