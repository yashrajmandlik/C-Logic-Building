#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkGreater
//          Input         : Integer
//          Output        : TRUE if the number is greater than 100,
//                          otherwise FALSE
//          Description   : Check whether the given number is greater than 100
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
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
//          Accepts an integer, calls ChkGreater, and displays whether the
//          number is greater than 100.
//
/////////////////////////////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if (bRet == 1)
    {
        printf("Greater \n");
    }
    else 
    {
        printf ("Smaller\n");
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
//      101                          Greater
//      100                          Smaller
//      50                           Smaller
//////////////////////////////////////////////////////////////////////////////////