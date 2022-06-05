#include <stdio.h>

int main_15()
{
    int a=10;
    int * pa=&a;
    int * * pp=&pa;
    printf("a=%d\n",a);
    printf("pa=%p\n",pa);
    printf("pp=%p\n",pp);
    //dereference
    *pa=20;
    printf("a=%d\n",a);
    //the size of pointer
    printf("The size of char*\tis\t\t%lu\n",sizeof(char*));
    printf("The size of short*\tis\t\t%lu\n",sizeof(short*));
    printf("The size of int*\tis\t\t%lu\n",sizeof(int*));
    printf("The size of long*\tis\t\t%lu\n",sizeof(long*));
    printf("The size of long long*\tis\t\t%lu\n",sizeof(long long*));
    printf("The size of float*\tis\t\t%lu\n",sizeof(float*));
    printf("The size of double*\tis\t\t%lu\n",sizeof(double*));
    return 0;
}
