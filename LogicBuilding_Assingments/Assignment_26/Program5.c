#include<stdio.h>
#include<stdlib.h>

void display(char ch)
{
    printf("decimal : %d\t\n",ch);
    printf("octal : %o\t\n",ch);
    printf("hexadecimal : %x\t\n",ch);
    
}

int main()
{
    char cValue = '\0';
   
    printf("Enter the character : \n");
    scanf("%c",&cValue);

    display(cValue);

    return EXIT_SUCCESS;
}