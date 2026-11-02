//////////////////////////////////////////////////////////////////////
//  File Name   : Program2.c
//  Author Name : Yashraj Mandlik
//  Batch       : LB - Assignment 10
//////////////////////////////////////////////////////////////////////
//  
// Q.2) program to calculate Area of Rectangle
//      
//  
// Input  : 5.3 , 9.78
// Output : 51834
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    
    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter a Width : \n");
    scanf("%f",&fValue1);

    printf("Enter a Height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is : %lf\n",dRet);

    return EXIT_SUCCESS;
}
