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

void pattern(int irow , int col)
{
    int i = 0 , j = 0 , icnt = 0;

    for(i = 1; i<= irow; i++)
    {

        for(j = 1; j<=col; j++)
        {
            
           if(i + j == irow + 1)
            {
                printf("#\t");
               
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
