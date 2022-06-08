 #include <stdio.h>

int main()
{
    int num[100],i,N;

    printf("Enter size of the array : ");
    scanf("%d", &N);

    printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\nAll negative elements in array are : ");
    for(i=0; i<N; i++)
    {
        if(num[i] < 0)
        {
            printf("%d\t", num[i]);
        }
    }

    return 0;
}
