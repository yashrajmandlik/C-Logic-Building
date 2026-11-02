//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 7
//////////////////////////////////////////////////////////////////////
//  
// Q.2) program to print number unit the number given by user 
//  
// Input  : 8
// Output : 1   2   3   4   5   6   7   8
//     
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display (int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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