#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);

    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("'%c' is alphabet",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("'%c' is degit",ch);
    }
    else
    {
        printf("'%c' is special character",ch);
    }

    return 0;
}
