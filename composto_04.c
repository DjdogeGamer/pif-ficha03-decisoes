#include <stdio.h>

int main()
{
    float n1, n2, n3, avg;

    printf("Insira as 3 notas => ");
    scanf("%f %f %f", &n1, &n2, &n3);

    avg = (n1 + n2 + n3) / 3.0;

    if (avg >= 7.0)
    {
        printf("Passou\n");
    }
    else
    {
        printf("Nao passou\n");
    }

    return 0;
}