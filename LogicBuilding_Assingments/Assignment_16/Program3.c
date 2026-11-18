#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Number of Rows and Column
//          Output        : Pattern of charectors 
//          Description   : Print the pattern thats given in question 
//          Date          : 12/11/2026
//          Author        : Yashraj Mandlik
/////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int icol)
{
    int i = 0, j = 0;
    char ch = '\0';

    ch = 'A';

    for(i = 1; i<= iRow; i++, ch++ )
    {
        for(j = 1; j <= icol; j++)
        {
            printf("%c\t",ch);
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
//      Rows = 4, Column = 4
//      
//      A   A   A   A
//      B   B   B   B
//      C   C   C   C
//      D   D   D   D
//
//////////////////////////////////////////////////////////////////////////////////