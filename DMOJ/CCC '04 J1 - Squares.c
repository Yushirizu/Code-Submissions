#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Determine the largest sqaure possible with the number of tiles*/

    int tiles;
    scanf("%d", &tiles);

    printf("The largest square has side length %d.", (int)sqrt(tiles));

    return 0;
}