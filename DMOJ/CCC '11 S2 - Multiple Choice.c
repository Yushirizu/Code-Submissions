#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*First line the number of the question and then the answers*/

    /*Output the number of correct answers*/

    int questions;
    scanf("%d", &questions);

    char answers[questions];

    for (int i = 0; i < questions; i++)
    {
        scanf(" %c", &answers[i]);
    }

    char responses[questions];

    for (int i = 0; i < questions; i++)
    {
        scanf(" %c", &responses[i]);
    }

    int correct = 0;

    for (int i = 0; i < questions; i++)
    {
        if (answers[i] == responses[i])
        {
            correct++;
        }
    }

    printf("%d", correct);

        return 0;
}