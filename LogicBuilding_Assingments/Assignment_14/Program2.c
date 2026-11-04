#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FactRev
//          Input         : Integer
//          Output        : Displays the factors of the given number in
//                          descending order, excluding the number itself
//          Description   : Find and display the factors from
//                          given number down to 1
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo/2 ; iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }    
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//          Accepts an integer from the user and calls FactRev to display its
//          factors in descending order.
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                        Output
//--------------------------------------------------------------------------------
//      12                           6  4  3  2  1
//      10                           5  2  1
//      7                            1
//////////////////////////////////////////////////////////////////////////////////