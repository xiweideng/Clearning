#include <stdio.h>
//global variable lifetime is the lifetime of the entire program.
extern int global;// from cFirstDemo.c
extern int var;//from ConstantAndVariable.c
int main_4()
{
    printf("global=%d var=%d\n",global,var);
    {
        /*
        local variable lifetime starts from the beginning of local scope,
        terminates in the ending of local scope.
        */
        int a=10;
        printf("a=%d\n",a);
        printf("global=%d var=%d\n",global,var);
    }
    //printf("a=%d\n",a);
    printf("global=%d var=%d\n",global,var);
    return 0;
}
