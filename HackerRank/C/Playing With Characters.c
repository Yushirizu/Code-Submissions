#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch;

    // array to store string

    char s[50];
    char sen[50];

    // print char

    scanf("%c", &ch);

    printf("%c\n", ch);

    // print string

    scanf("%s", s);

    printf("%s\n", s);

    scanf("\n");

    scanf("%[^\n]%*c]", sen);

    // print sentence

    printf("%s\n", sen);

    return 0;
}
