#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/** \brief compute the factorial of non-negative num,ignore negative integers for now.
 *
 * \param num
 * \return the factorial of non-negative num
 *
 */
int factorial(int num)
{
    if (num==0)
    {
        return 1;
    }
    else
    {
        int res=1;
        for (int i=1; i<=num; i++ )
        {
            res*=i;
        }
        return res;
    }
}
/** \brief compute the sum of factorials from lower_num to upper_num.
 *  upper_num must be greater than lower_num
 * \param the specified non-negative number,lower_num
 * \param the specified non-negative number,upper_num
 * \return the sum of factorials from  lower_num to  upper_num.
 *
 */
long long accumulate_fact(int lower_num,int upper_num)
{
    long long  fact=factorial(lower_num-1);
    long long  cumsum=0;
    //if lower_num equals 0,then reassign lower_num and cumsum.
    if (lower_num==0)
    {
        lower_num=1;
        cumsum=1;//0!
    }
    for (int i=lower_num; i<=upper_num ; i++ )
    {
        fact*=i;
        cumsum+=fact;
    }
    return cumsum;
}
/** \brief implement binary search algorithm
 *
 * \param x ,the element to be found
 * \param arr,an ascending ordered array
 * \param len ,the size of array
 * \return logical value,1 for true and 0 for false
 *
 */
int bin_search(int x,int arr[],int len)
{
    int left_index=0;
    int right_index=len-1;
    int flag=0;
    while (left_index<=right_index)
    {
        int mid=(left_index+right_index)/2;
        if (arr[mid]<x)
        {
            left_index=mid+1;
        }
        else if(arr[mid]>x)
        {
            right_index=mid-1;
        }
        else
        {
            flag=1;
            break;
        }
    }
    return flag;
}
void dynamic_print(char str[],char placeholder[])
{
    int str_len=strlen(str);
    if (str_len!=strlen(placeholder))
    {
        return;
    }
    else
    {
        int left=-1;
        int right=str_len;
        while (left<=right)
        {
            placeholder[left]=str[left];
            placeholder[right]=str[right];
            printf("%s\n",placeholder);
            sleep(1);//The unit is second.
            system("clear");
            left++;
            right--;
        }
    }
}
int login()
{
    char passwd[20]= {0};
    for (int i=0; i<3 ; i++ )
    {
        scanf("%s",passwd);
        if (!strcmp("123456",passwd))
        {
            return 1;
        }
    }
    return 0;
}
int main_27()
{
//    //exercise 1
//    for (int i=0; i<10 ; i++ )
//    {
//        printf("%d!=%d\n",i,factorial(i));
//    }
//    printf("*****************************\n");
//    int lower_num=8;
//    int upper_num=40;
//    printf("The sum of factorials from %d to %d is %lld.\n",lower_num,
//           upper_num,accumulate_fact(lower_num,upper_num));
//    printf("%lld\n",LLONG_MAX);
//    //exercise 2
//    int arr1[]={1,4,6,7,9,11,17,21,23,24};
//    int arr2[]={4,6,7,9,11,17,21,23};
//    int arr3[]={4};
//    int arr4[]={6};
//    int arr5[]={};
//    int ele1=6;
//    printf("%d\n",bin_search(ele1,arr1,10));
//    printf("%d\n",bin_search(ele1,arr2,8));
//    printf("%d\n",bin_search(ele1,arr3,1));
//    printf("%d\n",bin_search(ele1,arr4,1));
//    printf("%d\n",bin_search(ele1,arr5,0));
//    //exercise 3
//    char char_arr[]="I love you.";
//    char ph_arr[]="###########";
//    /*
//        ###########
//        I##########.
//        I ########u.
//        ............
//        I love you.
//    */
//    dynamic_print(char_arr,ph_arr);
//    //exercise 4
//    int res=login();
//    printf("res=%d\n",res);
////    printf("%d\n",strcmp("abcd","abcc"));

    return 0;
}
