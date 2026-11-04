//////////////////////////////////////////////////////////////////////
//  File Name   : Program3.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 13
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to Count digits between 3 and 7
//      
//  
// Input  : 9148
// Output : 1
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    while (iNo != 0)  
    {
      iDigit = iNo % 10;
      
      if ((iDigit > 3) && (iDigit < 7))
      {
            iCnt++;
      }

      iNo = iNo/10;
    }

    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);
    

    return EXIT_SUCCESS;
}