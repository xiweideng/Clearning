#include <stdio.h>

int main_22()
{
//    int day=0;
//    scanf("%d",&day);
//    switch (day)
//    {
//    case 1:
//        printf("Monday\n");
//		break;
//    case 2:
//        printf("Tuesday\n");
//		break;
//    case 3:
//        printf("Wednesday\n");
//		break;
//    case 4:
//        printf("Thursday\n");
//		break;
//    case 5:
//        printf("Friday\n");
//		break;
//    case 6:
//        printf("Saturday\n");
//		break;
//    case 7:
//        printf("Sunday\n");
//		break;
//    default:
//        printf("error");
//        break;
//    }
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("Workday\n");
//		break;
//    case 6:
//    case 7:
//        printf("Weekend\n");
//		break;
//    default:
//        printf("error");
//        break;
//    }
    int n=1;
    int m=2;
    switch (n)
    {
    case 1:
        m++;//m=3
    case 2:
        n++;//n=2
    case 3:
        switch (n)
        {
        case 1:
            n++;
        case 2:
            m++;//m=4
            n++;//n=3
            break;
        }
    case 4:
        m++;//m=5
        break;

    default:
        break;
    }
    printf("m=%d,n=%d\n",m,n);//m=5,n=3
    return 0;
}
