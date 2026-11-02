//////////////////////////////////////////////////////////////////////
//  File Name   : Program3.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 9
//////////////////////////////////////////////////////////////////////
//  
// Q.3) program to find evenfactorial
//  
// Input  : 5
// Output : 8   (4 * 2)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial (int iNo)
{
    int iCnt = 0,iFact = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1,iFact = 1; iCnt<=iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Evenfactorial is : %d\n",iRet);

    return EXIT_SUCCESS;
}
