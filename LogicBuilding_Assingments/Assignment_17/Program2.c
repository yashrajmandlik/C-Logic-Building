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
        if(i % 2 != 0 )
        {
            icnt = 2;
        }
        else
        {
            icnt = 1;
        }

        for(j = 1; j <= icol; j++)
        {
            printf("%d\t",icnt);
            icnt  = icnt + 2;
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
//      Rows = 4, Column = 5
//      
//      2   4   6   8   10
//      1   3   5   7   9
//      2   4   6   8   10
//      1   3   5   7   9
//////////////////////////////////////////////////////////////////////////////////