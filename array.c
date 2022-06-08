#include<stdio.h>
int main()
{
    int i,j,Rows,Cols;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the numbers of rows and cols : ");
    scanf("%d %d",&Rows,&Cols);

    printf("Enter elements for A matrix: \n");
    for(i=0;i<Rows;i++)
    {

        for(j=0;j<Cols;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
     printf("\n\nEnter elements for B matrix: \n");
    for(i=0;i<Rows;i++)
    {

        for(j=0;j<Cols;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

        printf("\nA= ");
        for(i=0;i<Rows;i++)
    {
        printf("\t");
        for(j=0;j<Cols;j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


        printf("\nB= ");
        for(i=0;i<Rows;i++)
    {
        printf("\t");
        for(j=0;j<Cols;j++)
        {

            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


        for(i=0;i<Rows;i++)
    {

        for(j=0;j<Cols;j++)
        {

          C[i][j]=A[i][j]+B[i][j];
        }

    }
     printf("\n A+B=");
        for(i=0;i<Rows;i++)
    {

        for(j=0;j<Cols;j++)
        {

            printf("%d ",C[i][j]);
        }
           printf("\n");

          printf("\t");


    }

    return 0;
}

