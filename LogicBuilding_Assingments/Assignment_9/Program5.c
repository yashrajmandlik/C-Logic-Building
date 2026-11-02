//////////////////////////////////////////////////////////////////////
//  File Name   : Program5.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 9
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to find difference between 
//      evenfactorial and oddfactorial
//  
// Input  : 5
// Output : -7   (8 - 15)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int OddFactorial (int iNo)
{
    int iCnt = 0,iEvenF = 0,iOddF = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1,iOddF = 1; iCnt<=iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            iOddF = iOddF * iCnt;
        }
    }

    for (iCnt = 1,iEvenF = 1; iCnt<=iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iEvenF = iEvenF * iCnt;
        }
    }

    return iEvenF - iOddF ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Diff is : %d\n",iRet);

    return EXIT_SUCCESS;
}
