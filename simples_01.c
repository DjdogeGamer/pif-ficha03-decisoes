#include <stdio.h>

int main()
{
    int n1, n2, sum;

    printf("Insira dois numeros => ");
    scanf("%d%d", &n1, &n2);

    sum = n1 + n2;

    if (sum > 10)
    {
        printf("Resultado: %d", sum);
    }

    return 0;
}