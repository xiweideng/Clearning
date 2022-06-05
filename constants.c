#include <stdio.h>
#define MAX 10000
enum Sex
{
    MALE,
    FEMALE,
    SECRET
};
int main_5()
{
//    //literal constants
//    'a';
//    2;
//    3l;
//    5ll;
//    1.41f;
//    1.50;
//    "hello";
//    // constant variable
//    const int a=10;
//    printf("a=%d\n",a);
//    int * p=&a;
//    *p=20;
//    printf("a=%d\n",a);
    //identifier/macro constant
#define MIN -10000
//    MAX=10;//error
//    int max=MAX;
//    printf("max=%d\n",max);
//    int min=MIN;
//    printf("min=%d\n",min);
    //enumeration constant
    enum Sex s=MALE;
    printf("s=%d\n",MALE);
    printf("s=%d\n",FEMALE);
    printf("s=%d\n",SECRET);
    return 0;
}
