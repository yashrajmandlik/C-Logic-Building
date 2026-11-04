//////////////////////////////////////////////////////////////////////
//  File Name   : Program4.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 13
//////////////////////////////////////////////////////////////////////
//  
// Q.4) program to multiply a digits from number
//      
//  
// Input  : 1018
// Output : 8
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int MulDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    iMul = 1;
    while (iNo != 0)  
    {
      iDigit = iNo % 10;
      if (iDigit != 0)
      { 
        iMul = iMul * iDigit;
      }
      iNo = iNo/10;
    }

    return iMul;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d\n",iRet);
    

    return EXIT_SUCCESS;
}