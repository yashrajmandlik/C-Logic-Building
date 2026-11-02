//////////////////////////////////////////////////////////////////////
//  File Name   : Program3.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 10
//////////////////////////////////////////////////////////////////////
//  
// Q.3) program to Convert KM to METER
//      
//  
// Input  : 5
// Output : 5000
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMETER(int iNo)
{
    int iKM = iNo * 1000;

    return iKM;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Distance in KM : \n");
    scanf("%i",&iValue);

    iRet = KMtoMETER(iValue);

    printf("Conversion is : %d\n",iRet);

    return EXIT_SUCCESS;
}
