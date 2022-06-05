#include <stdio.h>
#include <string.h>
int main_6()
{
    char str[]="hell";
    char str1[]= {'h','e','l','l'};
    char str2[]= {'h','e','l','l','\0'};
    printf("str_size=%d\n",sizeof(str)/sizeof(char));// 6
    printf("str1_size=%d\n",sizeof(str1)/sizeof(char));// 6
    printf("str2_size=%d\n",sizeof(str2)/sizeof(char));// 6
    printf("str=%s\n",str);
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
    printf("str_len=%d\n",strlen(str));
    printf("str1_len=%d\n",strlen(str1));
    printf("str2_len=%d\n",strlen(str2));
    return 0;
}
