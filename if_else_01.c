#include <stdio.h>

int main()
{
    float days;

    printf("Insira a quantidade de dias => ");
    scanf("%f", &days);

    if (days < 15)
    {
        printf("Total: R$%.2f", (50 * days) + (15.3 * days));
    }
    else if (days == 15)
    {
        printf("Total: R$%.2f", (50 * days) + (10 * days));
    }
    else
    {
        printf("Total: R$%.2f", (50 * days) + (8.5 * days));
    }

    return 0;
}