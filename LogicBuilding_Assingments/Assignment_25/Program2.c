#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL Capital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = Capital(cValue);

    if(bRet == true)
    {
        printf("it is capital");
    }
    else
    {
        printf("its not  a capital");
    }

    return EXIT_SUCCESS;
}