#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL chkchar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter string \n");
    scanf("%[^'\n's]",arr);

    printf("Enter the character \n");
    scanf(" %c",&cValue);

    bRet = chkchar(arr,cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("character not found");
    }

    return EXIT_SUCCESS;
}