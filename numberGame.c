#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
void menu()
{
    printf("*****************************\n");
    printf("***********1.Play************\n");
    printf("***********0.Exit************\n");
    printf("*****************************\n");
}
void game()
{
//    srand((unsigned int)time(NULL));
    /*if the speed of generating random number is too fast,
    adjacent repeating random numbers will appear
    */
    int pseudo_rand=rand()%100+1;//1-100
    int res;
    while (1)
    {
        printf("Please enter a number between 1 and 100:");
        scanf("%d",&res);
        if (res<pseudo_rand)
        {
            printf("The number %d you guess is too small.\n",res);
        }
        else if(res>pseudo_rand)
        {
            printf("The number %d you guess is too big.\n",res);
        }
        else
        {
            printf("Congratulations!\n");
            break;
        }
    }
}
int main_28()
{
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("Please enter your choice 1/0:\n");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("Quit game.\n");
            break;
        default:
            printf("Error,please try again!\n");
            break;
        }

    }
    while (input);
    return 0;
}
