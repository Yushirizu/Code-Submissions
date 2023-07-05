#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Two teams Apple and Bananas*/
    /*First line is three points second is 2 points third is 1*/
    /*Output A if Apple as More score than Banans B if Bananas as more than Apple and T if tie*/

    int a, b, c, d, e, f;

    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%d %d %d\n", &d, &e, &f);

    int apple = (a * 3) + (b * 2) + (c * 1);

    int bananas = (d * 3) + (e * 2) + (f * 1);

    if (apple > bananas)
    {
        printf("A");
    }
    else if (bananas > apple)
    {
        printf("B");
    }
    else
    {
        printf("T");
    }

    return 0;
}