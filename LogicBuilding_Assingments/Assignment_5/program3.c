#include<stdio.h>
#include<stdlib.h>

void DisplayGrade (float Marks)
{
    if ( (Marks < 0) || (Marks > 100))
    {
        printf("Marks are invalid .\n");
    }
    else if ( (Marks <= 59) && (Marks >= 40) )
    {
        printf(" D GRADE .\n");
    }
    else if ( (Marks <= 74) && (Marks >= 60) )
    {
        printf(" C GRADE .\n");
    }
    else if ( (Marks <= 89) && (Marks >= 75) )
    {
        printf(" B GRADE .\n");
    }
    else if ( (Marks <= 100) && (Marks >= 90) )
    {
        printf(" A GRADE .\n");
    }
    else
    {
        printf(" Fail.\n");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%f",&fMarks );
    
    DisplayGrade(fMarks);


    return EXIT_SUCCESS;
}