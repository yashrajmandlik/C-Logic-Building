//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 8
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to display table in reverse
//  
// Input  : 4
// Output : 40 36 32 28 24 20 16 12 8 4
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

    for (iCnt = 10; iCnt >= 1; iCnt--)
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
