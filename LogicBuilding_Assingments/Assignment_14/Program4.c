#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FactSum
//          Input         : Integer
//          Output        : Sum of the numbers from 1 to iNo that are not
//                          factors of iNo
//          Description   : Find and return the sum of all numbers in the
//                          specified range that do not divide iNo evenly
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

int FactSum(int iNo)
{
    int iCnt = 0,iSum = 0;

    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }    
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//          Accepts an integer from the user, calls FactSum, and displays
//          the returned sum.
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0,iRet = 0 ;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactSum(iValue);

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
//      12                           50
//      10                           34
//      7                            27
//////////////////////////////////////////////////////////////////////////////////