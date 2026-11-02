//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 7
//////////////////////////////////////////////////////////////////////
//  
// Q.4) program to print odd number given by N number by user 
//  
// Input  : 8
// Output : 1   3   5   7   
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay (int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }    
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}
