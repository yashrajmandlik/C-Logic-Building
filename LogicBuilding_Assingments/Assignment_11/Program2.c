//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 11
//////////////////////////////////////////////////////////////////////
//  
// Q.2) program to Display only even number from the range of number
//      given by user
//      
//  
// Input  : 10 , 21
// Output : 10  12  14  16  18  20
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
      printf("Invalid input \n");
      return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d \t",iCnt);
        }
    }
    printf("\n");

}

int main()
{
  int iValue1 = 0,iValue2 = 0;

  printf("Enter starting number : ");
  scanf("%d",&iValue1);

  printf("Enter ending number : ");
  scanf("%d",&iValue2);

  RangeDisplayEven(iValue1,iValue2);

  return EXIT_SUCCESS;
}
