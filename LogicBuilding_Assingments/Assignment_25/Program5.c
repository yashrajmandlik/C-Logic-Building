#include<stdio.h>
#include<stdlib.h>

void Schedule(char chdiv) 
{
   switch (chdiv)
   {
   case 'A': 
      printf("Exam time is 7 am.");
    break;

   case 'B':
      printf("Exam time is 8.30 am.");
    break;

   case 'C':
      printf("Exam time is 9.30 am.");
    break;

   case 'D':
      printf("Exam time is 10.30 am.");
    break;
   
   default:
    printf("its not valid time");
    break;
   }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the devision:\n");
    scanf("%c",&cValue);

    Schedule(cValue);

    return EXIT_SUCCESS;
}