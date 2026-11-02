//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 8
//////////////////////////////////////////////////////////////////////
//  
// Q.4) program to display table
//  
// Input  : 4
// Output : 4 8 12 16 20 24 28 32 36 40 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Table (int iNo)
{
    int iCnt = 0;
    int itab = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        itab = iCnt * iNo ;
        printf("%d  *  %d  =  %d\n",iNo,iCnt,itab);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}
