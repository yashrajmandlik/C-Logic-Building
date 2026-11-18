#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Number of Rows and Column
//          Output        : Pattern of Special Symbols 
//          Description   : Print the pattern thats given in question 
//          Date          : 12/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
   
    
    for(i = 1; i <= irow; i++)
    {

        for(j = 1; j <= icol; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
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
