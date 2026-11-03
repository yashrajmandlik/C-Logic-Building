//////////////////////////////////////////////////////////////////////
//  File Name   : Program4.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 11
//////////////////////////////////////////////////////////////////////
//  
// Q.4) program to Display summation of even number from the range of 
//      number given by user
//      
//  
// Input  : 10 , 18
// Output : 70
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void RangeSumEven(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    

    if((iStart > iEnd)  ||  (iStart < 0)  ||  (iEnd < 0 ))
    {
      printf("Invalid input \n");
      return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    
    return iSum;
}

int main()
{
  int iValue1 = 0,iValue2 = 0;
  int iRet = 0;

  printf("Enter starting number : ");
  scanf("%d",&iValue1);

  printf("Enter ending number : ");
  scanf("%d",&iValue2);

  iRet = RangeSumEven(iValue1,iValue2);
  printf("The Sum of all numbers in range is : %d \n",iRet);

  return EXIT_SUCCESS;
}
