
#include<stdio.h>
#include<stdlib.h>

 void Cheakchartype(char cValue)
 {
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c its Uppercase Alphabet",cValue);
    }
   else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c its Lowercase Alphabet",cValue);
    }
   else if(cValue >= 0 || cValue <= 9)
    {
        printf("%c  it is Digit",cValue);
    }
    else
    {
        printf(" Special Character");
    }
 }

int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    Cheakchartype(cValue);

    return EXIT_SUCCESS;
}