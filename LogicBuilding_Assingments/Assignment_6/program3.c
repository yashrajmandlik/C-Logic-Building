#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalamount = 0.0f;

    if(fAmount <= 1000)
    {
        printf("Payable Amount = %f ",fAmount);
    }
    else if(fAmount > 1000 && fAmount <= 4999)
    {
        fDiscount = fAmount * 0.10;
        fFinalamount = fAmount - fDiscount;
      
        printf("Payable Amount is = %f ",fFinalamount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = fAmount * 0.20;
        fFinalamount = fAmount - fDiscount;
 
        printf("Payable Amount is = %f ",fFinalamount);
    }

}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}