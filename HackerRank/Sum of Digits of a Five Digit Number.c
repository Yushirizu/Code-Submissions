#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, sum, digit;
    scanf("%d", &n);
    // Complete the code to calculate the sum of the five digits on n.

    for (int i = 1; i <= 5; i++)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d\n", sum);
    return 0;
}
