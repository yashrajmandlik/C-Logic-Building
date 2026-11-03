//////////////////////////////////////////////////////////////////////
//  File Name   : Program5.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 11
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to Display range of number given by user in reverse order
//      
//  
// Input  : 10 , 18
// Output : 126
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;

    if((iStart > iEnd))
    {
      printf("Invalid input \n");
      return;
    }

    for (iCnt = iEnd; iCnt >= iStart; iCnt --)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
  int iValue1 = 0,iValue2 = 0;

  printf("Enter starting number : ");
  scanf("%d",&iValue1);

  printf("Enter ending number : ");
  scanf("%d",&iValue2);

  RangeDisplayRev(iValue1,iValue2);

  return EXIT_SUCCESS;
}
