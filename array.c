#include <stdio.h>
int main_11()
{
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int *p=&arr;
    for (int i=0; i<10 ; i++ )
    {
        printf("%d ",*p);
        p++;
    }
    printf("\n");
    char char_arr[5]= {'a','c'};
    printf("%d\n",char_arr[4]);
    printf("%d\n",0=='\0');//1
    printf("%d\n",0=='0');//0
    return 0;
}
