#include<stdio.h>
int main()
{
    int n,i;

    printf("enter a number :");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        printf("%d",i);
        i++;
        if(i!=n)
        {
            printf(",");
        }
    }
    return 0;
}

