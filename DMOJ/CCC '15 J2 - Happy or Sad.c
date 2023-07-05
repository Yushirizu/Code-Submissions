#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*If no emoticons outpout none
    If more an equal number of happy and sad output unsure
    If more happy than sad output happy
    If more sad than happy output sad*/
int main()
{

    int happy = 0, sad = 0;

    char input[255];

    fgets(input, 255, stdin);

    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == ':' && input[i + 1] == '-')
        {
            if (input[i + 2] == ')')
            {
                happy++;
            }
            else if (input[i + 2] == '(')
            {
                sad++;
            }
        }
    }

    if (happy == 0 && sad == 0)
    {
        printf("none");
    }
    else if (happy == sad)
    {
        printf("unsure");
    }
    else if (happy > sad)
    {
        printf("happy");
    }
    else
    {
        printf("sad");
    }
}
