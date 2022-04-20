#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d+%d\n",i,sum);
    }
    printf("\n result is = %d",sum);

    return 0;
}
