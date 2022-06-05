#include <stdio.h>
#include <string.h>
int bigger(int a,int b);

int main_17()
{
//    char arr[]={'s','a','i'};
//    printf("The number of elements is %lu\n",strlen(arr));//arbitrary value
//    printf("%d\n",'\060'=='0');
//    int n=20;
//    int arr1[n];
//    arr1[0]=2;
//    printf("%d\n",arr1[0]);
    int num1=12;
    int num2=-1;
    int num3=15;
    printf("%d\n",bigger(num1,num2));//12
    printf("%d\n",bigger(num1,num3));//15
    return 0;
}
int bigger(int a,int b)
{
    return a>b?a:b;
}
