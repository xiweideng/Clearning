#include <stdio.h>
#include <math.h>
void print3Int()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int greater_a_b=a>=b?a:b;//greater_a_b is the greater number of a and b;
    int max_a_b_c=greater_a_b>=c?greater_a_b:c;// max_a_b_c is the max of a,b and c.
    printf("%d %d %d\n",max_a_b_c,greater_a_b,b);
}
void print3Multiple()
{
    for (int i=1; i<101 ; i+=2 )
    {
        printf("%d ",i);
    }
    printf("\n");
}
unsigned int gcd(unsigned int a,unsigned int b)
{
    unsigned int reminder;
    while ((reminder=a%b))
    {
        a=b;
        b=reminder;
    }
    return b;
}
unsigned int lcm(unsigned int a,unsigned int b)
{
    return (a*b)/gcd(a,b);
}
int print_leap_year(int start_year,int end_year)
{
    int num=0;
    for (int i=start_year; i<=end_year ; i++ )
    {
        if((i%4==0&&i%100!=0)||(i%400==0))
        {
            num++;
            printf("%d ",i);
        }
    }
    return num;
}
int is_prime_number(int integer)
{
    int max_divisor=floor(sqrt(integer));
    int flag=1;
    for (int i=2; i< max_divisor; i++ )
    {
        if (integer%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;

}
void print_prime_number(int start,int end)
{
    for (int i=start; i<=end ; i++ )
    {
        if (is_prime_number(i))
        {
            printf("%d ",i);
        }
    }
}
int main_29()
{
//    print3Int();
//    print3Multiple();
//    unsigned int a,b;
//    scanf("%u%u",&a,&b);
//    printf("The greatest common divisor of %d and %d is %d\n",a,b,gcd(a,b));
//    printf("The least common multiple of %d and %d is %d\n",a,b,lcm(a,b));
//    int count=print_leap_year(1000,2000);
//    printf("\n%d\n",count);
    print_prime_number(100,200);
    return 0;
}

