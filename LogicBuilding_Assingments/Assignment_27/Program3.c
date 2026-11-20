#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{

    int ibig = 0;
    int ismall = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
           ibig++;
        }
       else if(*str >= 'a' && *str <= 'z')
        {
           ismall++;
        }
        str++;
    }
    return ismall - ibig;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}