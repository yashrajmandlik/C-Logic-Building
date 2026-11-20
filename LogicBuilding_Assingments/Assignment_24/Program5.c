#include<stdio.h>
#include<stdlib.h>


void StrRev(char *str)
{
    int len = 0;
    while(str[len] != '\0')
    {
        len++;
    }

    for(int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

}
int main()
{
    char arr[20];
   

    printf("enter a string:\n");
    scanf("%[^'\n']s",arr);

    StrRev(arr);


    return EXIT_SUCCESS;
}