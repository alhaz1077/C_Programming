#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n>=80)
    {
        printf("CGPA = A+");
    }
     else if(n>=70)
    {
        printf("CGPA = A");
    }
     else if(n>=60)
    {
        printf("CGPA = A-");
    }
     else if(n>=50)
    {
        printf("CGPA = B+");
    }
     else if(n>=40)
    {
        printf("CGPA = D");
    }
    else
    {
        printf("Fail");
    }


    return 0;
}
