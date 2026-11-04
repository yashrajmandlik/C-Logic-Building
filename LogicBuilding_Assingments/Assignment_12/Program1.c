//////////////////////////////////////////////////////////////////////
//  File Name   : Program1.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 12
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to Display deigits in reverse order of a number
//      given by user.
//      
//  
// Input  : 1018
// Output : 8
//          1 
//          0
//          1
//
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    while (iNo != 0)  
    {
      iDigit = iNo % 10;
      printf("%d\n",iDigit);
      iNo = iNo/10;
    }

}

int main()
{
  int iValue = 0;

  printf("Enter a number : ");
  scanf("%d",&iValue);

  DisplayDigit(iValue);

  return EXIT_SUCCESS;
}