#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : MulFact
//          Input         : Integer
//          Output        : Product of the proper divisors of the given number
//          Description   : Calculate the product of all divisors from 1 to
//                          the given number
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////
int MulFact(int iNo)
{
    int iCnt = 0,iMul = 0;

    for (iCnt = 1,iMul = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }    
    }

    return iMul;

}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//          Accepts an integer from the user, calls MulFact, and displays
//          the returned product.
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

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
//      5                            1
//      6                            6
//      8                            8
//////////////////////////////////////////////////////////////////////////////////
