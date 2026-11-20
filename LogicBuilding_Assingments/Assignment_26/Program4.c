#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;
BOOL CheckSpecial(char ch)
{

    
        if((ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'))
        {
            return true;
        
        }
        else
        {
            return false;
        }

}
int main()
{
    char cValue = '\0';
    BOOL bret = false;

    
    printf("Enter a character:\n");
    scanf(" %c",&cValue);

    bret = CheckSpecial( cValue);

    if(bret==true)
    {
        printf(" it is a special character\n");
    }
    else
    {
        printf("it is not a special character\n");

    }
    return EXIT_SUCCESS;
}