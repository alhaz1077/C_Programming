//1.2+2.3+3.4+........+n1.n2

#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=2;
    printf("enter n1 & n2 :");
    scanf("%d %d",&n1,&n2);

    printf("1.2+2.3+3.4+........+%d.%d\n",n1,n2);

    while(a<=n1 && b<=n2)
    {
        sum=sum+a*b;
        a++;
        b++;
    }
    printf("=%d",sum);

    return 0;
}
