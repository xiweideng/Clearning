#include <stdio.h>
int global=2022;
static int static_global=2020;
int main_1()
{
    short int a=10;
    short b=20;
    printf("a=%d\tb=%d\n",a,b);
    printf("The size of char is %d bytes\n",sizeof(char));
    printf("The size of short is %d bytes\n",sizeof(short));
    printf("The size of int is %d bytes\n",sizeof(int));
    printf("The size of long is %d bytes\n",sizeof(long));
    printf("The size of long long is %d bytes\n",sizeof(long long));
    printf("The size of float is %d bytes\n",sizeof(float));
    printf("The size of double is %d bytes\n",sizeof(double));
    return 0;
}
