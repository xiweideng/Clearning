#include <stdio.h>
int main_3()
{
    //declare an array
    int arr[10]= {0};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<len ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    //assume the first element is the max
    int max=arr[0];
    for (int i=0; i<len ; i++ )
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The max element of array is %d\n",max);
    return 0;
}
