#include<stdio.h>
int main()
{
    double i,n,sum=0;
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {
        //printf("%d ",i);
        sum=sum+1/i;

    }

    printf("sum is=%lf\n",sum);

    return 0;
}
