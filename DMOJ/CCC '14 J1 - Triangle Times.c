#include <stdio.h>
#include <stdlib.h>

int main()
{
    // if all the angles are 60 output equilateral
    // if three angles adds up to 180 and two angles are the same output isosceles
    // if three angles adds up to 180 and all angles are different output scalene
    // if three angles do not add up to 180 output error
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a + b + c == 180)
    {
        if (a == b && b == c)
        {
            printf("Equilateral");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Error");
    }
}