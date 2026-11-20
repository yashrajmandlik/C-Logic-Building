#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
   
        if(ch >= 'A' && ch <='Z')
        {
            ch = ch + 32;
            printf("%c",ch);
        }
        else if(ch >= 'a' && ch <='z')
        {
            ch = ch - 32;
            printf("%c",ch);
        }
        else if(ch >= 0 && ch <= 9)
        {
            printf("%d",ch);
        }
        else
        {
            printf("%c",ch);
        }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}