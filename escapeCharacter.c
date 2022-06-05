#include <stdio.h>
#include <string.h>
int main_7()
{
    char str[]="C:\code\test.c\n";
    printf(str);
    char str1[]="C:\\code\\test.c\n";
    printf(str1);
    char str2[]="C:/code/test.c\n";
    printf(str2);
    printf("%c\n",'\'');
    printf("%c\n",'"');
    printf("%s\n","\"");
    printf("%s\n","'");
    printf("\a");//sound
    printf("ab\rcd");
    printf("ab\bcd");
    printf("%c\n",'\130');//octonary
    printf("%c\n",88);//decimal
    printf("%c\n",'X');// X
    printf("%c\n",'\101');//A
    printf("%c\n",'\x30');//'0'
    printf("%d\n",strlen("c:\test\328\test.c"));//14
    return 0;
}
