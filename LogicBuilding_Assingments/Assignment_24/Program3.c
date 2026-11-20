#include<stdio.h>
#include<stdlib.h>

int Firstchar(char *str, char ch)
{
    int icount = 0;

    while(*str != '\0')
    {

        if(*str == ch)
        {
             return icount;
           
        }
        str++;
        icount++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n's]",arr);

    printf("Enter the character \n");
    scanf(" %c",&cValue);

    iRet = Firstchar(arr,cValue);

    printf("Character location  is %d",iRet);


    return EXIT_SUCCESS;
}