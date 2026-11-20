#include<stdio.h>
#include<stdlib.h>

void DisplayAscii()
{
    int icnt = 0;

    printf("ASCII Table :\n");

    for(icnt = 0; icnt <= 255; icnt++)
    {
        printf("%d\t%o\t%x\t%c\n",icnt,icnt,icnt,icnt);
    }
    printf("\n");
}

int main()
{
    DisplayAscii();

    return EXIT_SUCCESS;
}