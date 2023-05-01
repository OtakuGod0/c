#include <stdio.h>
#include <string.h>

int main()
{

    // WAP to print greatest among three number
    int x = 10, y = 2, z = 3;
    int max = (x > y) ? ((x > z) ? (x) : (z)) : ((y > z) ? (y) : (z));
    printf("%d", max);

    // wap to print day of a week when particular number 1-7 is given7
    x = 3;

    switch (x)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid day number\n");
        break;
    }

    return 0;
}
