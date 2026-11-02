//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 7
//////////////////////////////////////////////////////////////////////
//  
// Q.5) program to print first 5 multiple of N number by user 
//  
// Input  : 5
// Output : 5   10  15  20  25   
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  MultipleDisplay (int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}
