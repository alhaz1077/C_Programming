#include<stdio.h>
int main()
{

    int i,n=20,X=0,Y=1,SUM;

    printf("1+");

    for(i=2;i<=n;i++)
    {
        SUM=X+Y;
        printf("%d",SUM);

        X=Y;
        Y=SUM;
        if(i!=n)
        {
            printf("+");
        }
    }

    return 0;
}

