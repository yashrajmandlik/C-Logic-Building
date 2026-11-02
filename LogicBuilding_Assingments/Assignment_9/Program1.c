//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 9
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to display below pattern
//  
// Input  : 2
// Output : *   *   #   #
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display (int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
    for (iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
