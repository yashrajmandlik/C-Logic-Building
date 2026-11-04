#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FactDiff
//          Input         : Integer
//          Output        : Difference between the sum of factors and the
//                          sum of non-factors of the given number
//          Description   : Find and return the sum of the factors minus the
//                          sum of the non-factors from 1 to iNo
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0,iSumF = 0, iSumNonF =0;

    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSumNonF = iSumNonF + iCnt;
        }
        else 
        {
            iSumF = iSumF + iCnt;
        }    
    }
    return iSumF - iSumNonF;
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//          Accepts an integer from the user, calls FactDiff, and displays
//          the returned difference.
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0,iRet = 0 ;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                        Output
//--------------------------------------------------------------------------------
//      12                           4
//      10                           8
//      7                            -13
//////////////////////////////////////////////////////////////////////////////////