#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Number of Rows and Column
//          Output        : Pattern of integers 
//          Description   : Print the pattern thats given in question 
//          Date          : 12/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
    int icnt = 0;
    
    for(i = 1; i <= irow; i++)
    {
        icnt = i;

        for(j = 1; j <= icol; j++)
        {
            printf("%d\t",icnt);
            icnt++;
        }
        
         printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows and col :\n");
    scanf("%d %d",&iValue1,&iValue2);
    
    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Rows = 3, Column = 3
//      
//      1   2   3   4
//      2   3   4   5 
//      3   4   5   6
//      4   5   6   7
//
//////////////////////////////////////////////////////////////////////////////////