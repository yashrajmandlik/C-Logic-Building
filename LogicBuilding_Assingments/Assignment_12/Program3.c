//////////////////////////////////////////////////////////////////////
//  File Name   : Program3.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 12
//////////////////////////////////////////////////////////////////////
//  
// Q.3) program to count frequency of 2 in number given by user 
//      
//  
// Input  : 2182033
// Output : 2.
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

int CountTwo(int iNo)
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
      
      if (iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of two in number is : %d\n",iRet);
    

    return EXIT_SUCCESS;
}