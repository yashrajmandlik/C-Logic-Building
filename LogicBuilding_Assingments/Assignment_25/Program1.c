#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL Chkalpha(char ch)
{
    if(ch >= 'A' && ch >= 'Z' || ch>= 'a' && ch >= 'z')
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

    bRet = Chkalpha(cValue);

    if(bRet == true)
    {
        printf("it is character");
    }
    else
    {
        printf("its not character");
    }

    return EXIT_SUCCESS;
}