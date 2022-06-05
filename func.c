#include <stdio.h>
/*
declaration
*/
int add(int num1,int num2);
static int minus(int num1,int num2);
int main_10()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum is %d\n",add(a,b));
    printf("The difference is %d\n",minus(a,b));
    return 0;
}
/*
implementation
*/
int add(int num1,int num2)
{
    return num1+num2;
}
//minus
static int minus(int num1,int num2)
{
    return num1-num2;
}

