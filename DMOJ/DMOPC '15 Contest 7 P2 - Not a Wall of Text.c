//url : https://dmoj.ca/problem/dmopc15c7p2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[81];
    int word = 0;
    int i = 0;
    scanf("%[^\n]s", &sentence);
    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ')
        {
            word++;
        }
        i++;
    }
    printf("%d", word + 1);
}