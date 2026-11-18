#include<stdio.h>
#include<stdlib.h>
void pattern(int irow , int col)
{
    int i = 0 , j = 0 , icnt = 0;

    for(i = 1; i<= irow; i++)
    {

        for(j = 1; j<=col; j++)
        {
            if(j % 2 == 0)
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
int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;
}