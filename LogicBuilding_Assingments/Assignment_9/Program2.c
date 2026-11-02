//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 9
//////////////////////////////////////////////////////////////////////
//  
// Q.2) program to Convert us dollar to inr . (1$ = 70rupees)
//  
// Input  : 3
// Output : 210
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DollartoINR (int iDollar)
{
    int iRuppess = 0;

    iRuppess = iDollar * 70 ;

    return iRuppess;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number in USD : \n");
    scanf("%d",&iValue);

    iRet = DollartoINR(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
