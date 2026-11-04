//////////////////////////////////////////////////////////////////////
//  File Name   : Program1.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 13
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to Count even digit from number given by user
//      
//  
// Input  : 9148
// Output : 2
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int CountEven(int iNo)
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
      
      if ((iDigit % 2)== 0)
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

    iRet = CountEven(iValue);

    printf("Frequency of even digit in number is : %d\n",iRet);
    

    return EXIT_SUCCESS;
}