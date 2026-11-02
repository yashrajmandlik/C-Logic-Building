//////////////////////////////////////////////////////////////////////
//  File Name   : Program5.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 10
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to convert Sqaure feet in Meter
//      
//  
// Input  : 7
// Output : 0.650321
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double dResult = 0.0;

    dResult = 0.0929 * iNo;

    return dResult;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Conversion of Square feet to Meter is : %lf\n",dRet);

    return EXIT_SUCCESS;
}
