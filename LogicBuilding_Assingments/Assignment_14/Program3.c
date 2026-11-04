#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FactRev
//          Input         : Integer
//          Output        : Displays the numbers from 1 to the given number
//                          that are not factors of the given number
//          Description   : Check each number from 1 through iNo and display
//                          those that do not divide iNo evenly
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }    
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//          Accepts an integer from the user and calls FactRev to display
//          numbers that are not factors of that integer.
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
//      12                           5  7  8  9  10  11
//      10                           4  6  7  8  9
//      7                            (no output)
//
//////////////////////////////////////////////////////////////////////////////////