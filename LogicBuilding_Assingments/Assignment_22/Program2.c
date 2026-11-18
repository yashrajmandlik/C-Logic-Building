#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i>= 1; i--)
    {
            printf("%d\t#\t",i);
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