#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// A goto statement can  jump only within the scope of a function.
int main_30()
{
//FLAG:
//    printf("Hello\n");
//    printf("World!\n");
//    goto FLAG;
    char input[20]= {0};
    system("shutdown -h 1");
again:
    printf("Your computer will shut down automatically in 1 minute ,please enter cancel to cancel.\n");
    scanf("%s",input);
    if (strcmp(input,"cancel")==0)
    {
        system("shutdown -c");
    }
    else
    {
        goto again;
    }
    return 0;
}
