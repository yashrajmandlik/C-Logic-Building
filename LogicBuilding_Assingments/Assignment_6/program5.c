
#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fsalary, int iyear)
{
    float fbonus = 0.0f;

    if(fsalary <= 0 || iyear <= 0)
    {
        printf("Invalid input\n");
       
    }
    else if(iyear > 10)
    {
        fbonus = fsalary * 0.15;
        printf("Bonus is : %f",fbonus);
    }
    else if(iyear >= 5 && iyear <= 10 )
    {
        fbonus = fsalary * 0.1;
        printf("Bonus is : %f",fbonus);
    }
    else
    {
        fbonus = fsalary * 0.05;
        printf("Bonus is : %f",fbonus);
    }
}

int main()
{
    float fsalary = 0.0f;
    int iyear = 0;

    printf("Enter salary and years of service : \n");
    scanf("%f %d",&fsalary,&iyear);

    CalculateBonus(fsalary, iyear);

    return EXIT_SUCCESS;
}