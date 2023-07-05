#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*TroyMartian as at least 3 antennae and at most 4 eyes*/
    /*VladSaturnian, who has at most 6 antennae and at least 2 eyes*/
    /*GraemeMercurian, who has at most 2 antennae and at most 3 eyes.*/

    /*First line is number of antennae second is number of eyes*/

    int antennae, eyes;

    scanf("%d%d", &antennae, &eyes);

    if (antennae >= 3 && eyes <= 4)
    {
        printf("TroyMartian\n");
    }
    if (antennae <= 6 && eyes >= 2)
    {
        printf("VladSaturnian\n");
    }
    if (antennae <= 2 && eyes <= 3)
    {
        printf("GraemeMercurian\n");
    }
    return 0;
}