
#include<stdio.h>
#include<stdlib.h>

void Findmultidiv(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("%d Divisible by 3 and 5",iValue);
    }
    else
    {
        printf("%d Its Not Divisible by 3 and 5",iValue);
    }
}

int main()
{
    int iValue = 0;
      
    printf("Enter number :\n");
    scanf("%d",&iValue);

    Findmultidiv(iValue);

    return EXIT_SUCCESS;
}