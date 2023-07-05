#include <stdio.h>

int main()
{

    // first line is the month
    // second line is the day
    // the date is February 18th
    // outpout before or after
    int month, day;
    scanf("%d%d", &month, &day);

    if (month < 2)
    {
        printf("Before");
    }
    else if (month > 2)
    {
        printf("After");
    }
    else
    {
        if (day < 18)
        {
            printf("Before");
        }
        else if (day > 18)
        {
            printf("After");
        }
        else
        {
            printf("Special");
        }
    }

    return 0;
}