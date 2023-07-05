#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    /*First input is the number of lines than char[100]*/

    int lines;
    scanf("%d", &lines);
    char input[100];

    int t = 0;
    int s = 0;

    for (int i = 0; i < lines; i++)
    {
        scanf(" %[^\n]s", input);
        for (int j = 0; j < 100; j++)
        {
            if (input[j] == 't' || input[j] == 'T')
            {
                t++;
            }
            else if (input[j] == 's' || input[j] == 'S')
            {
                s++;
            }
        }
    }

    if (t > s)
    {
        printf("English");
    }
    else
    {
        printf("French");
    }
}