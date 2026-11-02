//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 8
//////////////////////////////////////////////////////////////////////
//  
// Q.2) program to print Single digits number in words 
//  
// Input  : 4
// Output : four  
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void  Number (int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 0 : printf ("zero\n");
        break;
        case 1 : printf ("one\n");
        break;
        case 3: printf ("three\n"); 
        break;
        case 4: printf ("four\n");  
        break;
        case 5: printf ("five\n");  
        break;
        case 6: printf ("six\n");   
        break;
        case 7: printf ("seven\n"); 
        break;
        case 8: printf ("eight\n"); 
        break;
        case 9: printf ("nine\n");  
        break;
        default: printf("Enter a Single digit onlyy. \n");
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
