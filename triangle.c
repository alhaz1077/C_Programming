#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    scanf("%d%d%d",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(sum==180)
    {
        printf("valid triangle");
    }
    else
    {
        printf("error");
    }


    return 0;
}
