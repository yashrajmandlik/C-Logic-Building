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

void Pattern(int iRow, int iCol)
{
    int iCnt = 0,iCnt1 =0;

    for (iCnt = 1; iCnt <= 9; iCnt++)
    {
        for(iCnt1 = 1; iCnt1 <= iCol; iCnt1++)
        {
            printf("%d\t",iCnt1);
        }
        printf("\n");
    }
    
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
    int iValue1 = 0,iValue2 = 0;
    
    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////