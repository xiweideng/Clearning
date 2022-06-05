#include <stdio.h>
extern int global;
//extern int minus(int,int );
void test1()
{
    int a=1;
    a++;
    printf("%d ",a);
}
void test2()
{
    static int a=1;
    a++;
    printf("%d ",a);
}
//typedef unsigned int uint32;//redefine type
int main_13()
{
//    {
//        auto int a=10;
//        int b=20;
//    }
//    uint32 c=100;
//    printf("%d\n",c);
    int i=0;
    while(i<10)
    {
//        test1();
        test2();
        i++;
    }
    printf("\n");
    printf("global=%d\n",global);
    printf("sum=%d\n",add(2,3));
//    printf("%d\n",minus(2,3));
    return 0;
}
