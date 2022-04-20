#include<stdio.h>
int main()
{
    int i,j,n=75,sum,s1=0,s2=0;

    for(i=5;i<=75;i=i+12)
    {
        printf("%d\n",i);
        s1=s1+i;
    }
    printf("sum1=%d\n",s1);

    for(j=11;j<=75;j=j+12)
    {
        printf("%d\n",j);
        s2=s2+i;
    }
    printf("sum2=%d\n",s2);

    sum=s1-s2;

    printf("result = %d\n",sum);

    return 0;
}

