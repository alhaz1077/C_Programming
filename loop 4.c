#include <stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+2)
    {
        sum =sum+ i;
        printf("%d\n",sum);
    }
    printf("sum of all odd number=%d",sum);

    return 0;
}

