#include <stdio.h>
struct Student
{
    char name[5];
    int age;
    double score;
};
struct Book
{
    char name[20];
    float price;
    char book_id[10];
};
int main_16()
{
    struct Student stu1= {"jack",23,98.7};
    struct Student * p=&stu1;
    printf("dot operator :\t\tname=%s age=%d score=%lf\n",stu1.name,stu1.age,stu1.score);
    printf("dereference operator :\tname=%s age=%d score=%lf\n",(*p).name,(*p).age,(*p).score);
    printf("arrow operator :\tname=%s age=%d score=%lf\n",p->name,p->age,p->score);
    return 0;
}
