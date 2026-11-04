#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Mult
//          Input         : Three integers
//          Output        : Product of the non-zero inputs; if all are non-zero,
//                          returns the product of all three
//          Description   : Multiply the three given numbers, treating a zero
//                          input as omitted from the multiplication
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

int Mult(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 == 0)
    {
        return iNo2*iNo3;
    }
    else if (iNo2 == 0)
    {
        return iNo1*iNo3;
    }
    else if (iNo3 == 0)
    {
        return iNo1*iNo2;
    }
    else 
    {
        return iNo1*iNo2*iNo3;
    }
    
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//          Accepts three integers, calls Mult, and displays the returned
//          product.
//
/////////////////////////////////////////////////////////////////////////////////

int main ()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue1);

    printf("Enter number : ");
    scanf("%d",&iValue2);

    printf("Enter number : ");
    scanf("%d",&iValue3);

    iRet = Mult(iValue1,iValue2,iValue3);

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
//      2, 3, 4                      24
//      0, 5, 6                      30
//      2, 0, 4                      8
//////////////////////////////////////////////////////////////////////////////////