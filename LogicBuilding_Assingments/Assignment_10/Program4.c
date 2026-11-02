//////////////////////////////////////////////////////////////////////
//  File Name   : Program4.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 10
//////////////////////////////////////////////////////////////////////
//  
// Q.4) program to convert tempreature in fahrenheit to celcius
//      
//  
// Input  : 34
// Output : 1.111111
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0f;

    fCelsius = ((fTemp - 32.0) * (5.0/9.0));

    return fCelsius;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter a Tempreature : \n");
    scanf("%d",&iValue);

    dRet = FhtoCs(iValue);

    printf("temp is : %lf\n",dRet);

    return EXIT_SUCCESS;
}
