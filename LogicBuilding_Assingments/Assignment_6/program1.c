
#include<stdio.h>
#include<stdlib.h>

void CalculateBill(int iUnit)
{
   
    if(iUnit >= 0 && iUnit <= 100)
    {
       iUnit = iUnit * 5;
       printf("Bill is : %d ",iUnit);
    }
     else if (iUnit > 100 && iUnit <= 200)
    {
       iUnit = (100 * 5) + (iUnit - 100) * 7;
       printf("Bill is : %d ",iUnit);
    }
     else if(iUnit > 200 )
    {
       iUnit = (100 * 5)+ (100 * 7) + (iUnit - 200) * 10;
       printf("Bill is : %d ",iUnit);
    }
}

int main()
{
    int iUnit = 0;

    printf("Enter consume unit :\n");
    scanf("%d",&iUnit);

    CalculateBill(iUnit);

    return EXIT_SUCCESS;
}