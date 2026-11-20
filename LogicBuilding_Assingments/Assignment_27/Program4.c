#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL CheakVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'  || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return true;
        }
        str++;
    }
    return false;

}

int main()
{
    char arr[20];
    BOOL bRet = false;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    bRet = CheakVowel(arr);

    if(bRet == true)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("there is no vowel");
    }

    return EXIT_SUCCESS;
}