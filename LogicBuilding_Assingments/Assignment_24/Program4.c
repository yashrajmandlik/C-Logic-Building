#include<stdio.h>
#include<stdlib.h>


int Lastchar(char *str , char ch)
{
    int iCount = 0;
    int ilast = -1;

    while (*str!='\0')
    {
        if(*str == ch)
        {
           ilast = iCount;
        }
        str++;
        iCount++;
    }
    return ilast;
    
}
int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("enter a string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter a character:\n");
    scanf(" %c",&cValue);

    iRet = Lastchar(arr , cValue);

    printf(" last Character index is %d\n",iRet);

    return EXIT_SUCCESS;
}