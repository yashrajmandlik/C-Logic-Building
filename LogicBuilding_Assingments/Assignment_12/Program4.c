//////////////////////////////////////////////////////////////////////
//  File Name   : Program5.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 11
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to Count frequency of 4 in numbwe
//      
//  
// Input  : 914830343
// Output : 2
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

int CountFour(int iNo)
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
      
      if (iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Frequency of four in number is : %d\n",iRet);
    

    return EXIT_SUCCESS;
}