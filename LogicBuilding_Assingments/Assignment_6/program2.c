#include<stdio.h>
#include<stdlib.h>
void CheckAdmission(float fMarks , int iAge)
{
    if((fMarks >= 60) && (iAge >=17))
    {
        printf("%f %d it is eligible for admission",fMarks,iAge);
    }
    else if((fMarks <= 0) || (fMarks > 100) || (iAge <= 0))
    {
        printf("%f %d Its invalid",fMarks,iAge);
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}