#include <stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum =sum+i;
        //printf("%d + %d\n",i,sum);
    }

    printf("Sum is = %d", sum);

    return 0;
}
