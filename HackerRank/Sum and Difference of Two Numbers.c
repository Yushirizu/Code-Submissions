#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, rep;
    float c, d, repf;

    scanf("%d%d", &a, &b);

    scanf("\n");

    scanf("%f%f", &c, &d);

    printf("%d %d\n", a + b, a - b);

    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}
