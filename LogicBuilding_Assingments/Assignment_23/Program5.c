#include<stdio.h>
#include<stdlib.h>
int Countwhite(char *str)
{

    int icount = 0; 

    while(*str != '\0')
    {

       if(*str == ' ')
       {
            icount++;
            
       }
       str++;
    
    }
    return icount;
    
}

int main()
{
    char arr[20];
    int iRet = 0;


    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    iRet = Countwhite(arr);

    printf("no of spaces : %d",iRet);



    return EXIT_SUCCESS;
}