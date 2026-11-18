#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int i = 0;
    char ch = '\0';

   for(i = 1, ch ='A'; i<= iNo; i++,ch++)
   {
        printf("%c\t",ch);
   } 
   
}

int main()
{

    int iValue = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;
}