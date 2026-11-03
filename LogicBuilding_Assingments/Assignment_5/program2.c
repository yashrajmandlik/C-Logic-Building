#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if( ((iYear % 400) == 0) || ( ((iYear % 4) == 0) && (iYear % 100 != 0) ) )
    {
        printf("This is a Leap Year \n");
    }
    else 
    {
        printf("Not a Leap year\n");
    }
}
int main()
{
    int iYear = 0;

    printf("Enter Year : ");
    scanf("%d",&iYear);
    
    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}