#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkEqual
//          Input         : Two integers
//          Output        : TRUE if the numbers are equal, otherwise FALSE
//          Description   : Check whether the two given numbers are equal
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }

}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//          Accepts two integers, calls ChkEqual, and displays whether the
//          numbers are equal.
//
/////////////////////////////////////////////////////////////////////////////////

int main ()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number : ");
    scanf("%d",&iValue1);

    printf("Enter number : ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if (bRet == 1)
    {
        printf("Equal numbers  \n");
    }
    else 
    {
        printf ("Not equal numbers\n");
    }
    
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                        Output
//--------------------------------------------------------------------------------
//      10, 10                       Equal numbers
//      10, 20                       Not equal numbers
//      -5, -5                       Equal numbers
//////////////////////////////////////////////////////////////////////////////////