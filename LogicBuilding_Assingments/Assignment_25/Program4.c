#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL Small(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = Small(cValue);

    if(bRet == true)
    {
        printf("it is small");
    }
    else
    {
        printf("its not  a small");
    }

    return EXIT_SUCCESS;
}