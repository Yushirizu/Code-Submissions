#include <stdio.h>

int main()
{
    int y, m, o;

    scanf("%d%d", &y, &m);

    o = m - y;
    o = o + m;

    printf("\n%d", o);

    return 0;
}