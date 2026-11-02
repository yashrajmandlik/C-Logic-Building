//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 8
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to print first small if number is less than 50 , 
//      print medium if number is between 50 to 100 and print 
//      large if number is big than 100
//  
// Input  : 75
// Output : medium  
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  Number (int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (50 <= iNo <= 100)
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}
