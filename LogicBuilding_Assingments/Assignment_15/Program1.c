#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////
//  File Name   : Program4.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 15
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to display name from user
//      
//  
// Input  : Yashraj M
// Output : Yashraj M
//
///////////////////////////////////////////////////////////////////////

int main ()
{
    char Name[30];

    printf("Please enter full name : ");
    scanf("%[^'\n']s",Name);

    printf("Your name is %s \n",Name);
    
    return EXIT_SUCCESS;
}