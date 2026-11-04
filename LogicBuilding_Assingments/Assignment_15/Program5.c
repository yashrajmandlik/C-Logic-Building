#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Percentage
//          Input         : Total marks and obtained marks
//          Output        : Percentage of marks obtained
//          Description   : Calculate and return the percentage based on the
//                          total marks and obtained marks
//          Date          : 04/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

float Percentage(int totalMarks, int ObtMarks)
{
    float Percent = 0.0f;
    
    Percent = (((float) ObtMarks /(float) totalMarks ) * 100.0);

    return Percent;
    
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//          Accepts total marks and obtained marks, calls Percentage, and
//          displays the result rounded to the nearest whole percent.
//
/////////////////////////////////////////////////////////////////////////////////

int main ()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    float fRet = 0.0f;
    
    printf("Enter total marks : ");
    scanf("%d",&iValue1);

    printf("Enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%.f%%\n",fRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Total marks, Obtained marks       Output
//--------------------------------------------------------------------------------
//      500, 425                         85%
//      600, 510                         85%
//      800, 620                         78%
//////////////////////////////////////////////////////////////////////////////////