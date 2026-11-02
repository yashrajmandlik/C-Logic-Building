//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 8
//////////////////////////////////////////////////////////////////////
//  
// Q.3) program to print Factorial
//  
// Input  : 4
// Output : 24 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Factorial (int iNo)
{
    int iCnt = 0;
    int ifact = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1, ifact = 1; iCnt <= iNo; iCnt++)
    {
        ifact = ifact * iCnt ;
    }

    return ifact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The factorial of %d is : %d\n",iValue,iRet);

    return EXIT_SUCCESS;
}
