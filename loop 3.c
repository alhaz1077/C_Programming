#include <stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        sum =sum+ i;
        printf("%d\n",sum);
    }
    printf("sum of even number=%d",sum);

    return 0;
}
