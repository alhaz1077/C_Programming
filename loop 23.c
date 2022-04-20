#include<stdio.h>
int main()
{
    int i,n=100,sum=0;
    //scanf("%d",&n);

    for(i=7;i<=100;i=i+13)
    {
        sum=sum+i;
        printf("%d+%d\n",i,sum);
    }
    printf("\n result is = %d",sum);

    return 0;
}
