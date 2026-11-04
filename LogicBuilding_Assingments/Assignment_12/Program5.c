//////////////////////////////////////////////////////////////////////
//  File Name   : Program5.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 11
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to Count less than 6 digits in numbwe
//      
//  
// Input  : 9183033
// Output : 5
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

int Count(int iNo)
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
      
      if (iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d\n",iRet);
    

    return EXIT_SUCCESS;
}