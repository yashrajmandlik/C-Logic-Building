//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 12
//////////////////////////////////////////////////////////////////////
//  
// Q.2) program to Display does the number contain zero in it 
//      
//  
// Input  : 9183033
// Output : Zero found .
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    while (iNo != 0)  
    {
      iDigit = iNo % 10;
      
      if (iDigit == 0)
      {
            return 1;
      }

      iNo = iNo/10;
    }

    return 0;

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == 1)
    {
        printf("Zero found \n");
    }
    else 
    {
        printf("Zero did not found \n");
    }

    return EXIT_SUCCESS;
}