//////////////////////////////////////////////////////////////////////
//  File Name   : Program1.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 10
//////////////////////////////////////////////////////////////////////
//  
// Q.1) program to calculate Area of Circle 
//      
//  
// Input  : 5.3
// Output : 88.2026
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float PI = 0.0f;

    PI = 3.14f;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter a radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f\n",dRet);

    return EXIT_SUCCESS;
}
