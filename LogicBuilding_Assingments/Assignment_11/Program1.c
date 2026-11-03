//////////////////////////////////////////////////////////////////////
//  File Name   : Program1.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 11
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to Display number from the range given by user
//      
//  
// Input  : 10 , 13
// Output : 10  11  12  13
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
      printf("Invalid input \n");
      return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        printf("%d \t",iCnt);
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

  RangeDisplay(iValue1,iValue2);

  return EXIT_SUCCESS;
}
