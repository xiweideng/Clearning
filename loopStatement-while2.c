#include <stdio.h>

int main_24()
{
    char passwd[20]= {0};
    printf("Please enter your password:");
    scanf("%s",passwd);
    printf("Please confirm your password:%s\n",passwd);
    printf("Enter Y/N:");
    //clear buffer
    int tmp=0;
    while ((tmp=getchar())!='\n')
    {
        ;
    }
    //read a character from stdin
    int ch=getchar();
    if ('Y'==ch)
    {
        printf("Successfully!\n");
    }
    else
    {
        printf("Failed!\n");
    }

    return 0;
}
