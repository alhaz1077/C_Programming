#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter :");
    scanf("%c",&ch);

    if(ch>='a'&&ch<='z')
    {
        printf("'%c' is lowercase alphabet",ch);
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("'%c' is upercase alphabet",ch);
    }
    else
    {
        printf("'%c' is special character",ch);
    }

    return 0;
}
