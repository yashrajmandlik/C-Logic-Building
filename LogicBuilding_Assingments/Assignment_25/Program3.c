#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL Digits(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = Digits(cValue);

    if(bRet == true)
    {
        printf("it is digit");
    }
    else
    {
        printf("its not  a digit");
    }

    return EXIT_SUCCESS;
}