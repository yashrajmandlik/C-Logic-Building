//////////////////////////////////////////////////////////////////////
//  File Name   : Program5.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 13
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to return difference between summation of evendigits
//      and summation of 0dd digits 
//      
//  
// Input  : 1018
// Output : 6
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iESum = 0, iOSum = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    while (iNo != 0)  
    {
      iDigit = iNo % 10;
      if ((iDigit % 2) == 0)
      { 
        iESum = iESum + iDigit;
      }
      else
      {
        iOSum = iOSum + iDigit;
      }
      iNo = iNo/10;
    }

    return iESum-iOSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);
    

    return EXIT_SUCCESS;
}