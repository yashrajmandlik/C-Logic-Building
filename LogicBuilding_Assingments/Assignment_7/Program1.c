//////////////////////////////////////////////////////////////////////
//  File Name   : Program1.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 7
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to print $  * from number of input by user 
//  
// Input  : 5
// Output : $  *  $  *   $  *   $  *   $  *
//     
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("$ \t * \t");
    }
    printf("\n");
}

int main()
{   
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}