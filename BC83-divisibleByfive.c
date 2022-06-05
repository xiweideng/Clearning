#include <stdio.h>
int main_20()
{
//    freopen("five.in","r",stdin);
//    freopen("five.out","w",stdout);
    int M;
    scanf("%d",&M);
    //method 1
    if (M%5)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    //method 2
//    M%5?printf("NO"):printf("YES");
    return 0;
}
