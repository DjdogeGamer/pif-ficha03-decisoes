#include <stdio.h>
#include <ctype.h>

int main()
{
    char letter;

    printf("Insira uma letra => ");
    scanf("%c%*c", &letter);
    letter = tolower(letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("E vogal\n");
    }
    else
    {
        printf("Nao e vogal\n");
    }

    return 0;
}