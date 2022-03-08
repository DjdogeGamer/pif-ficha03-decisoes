#include <stdio.h>

int main()
{
    int a, b;

    printf("Insira dois numeros => ");
    scanf("%d %d", &a, &b);

    if (a % b == 0)
    {
        printf("%d e divisivel por %d", a, b);
    }
    else
    {
        printf("%d nao e divisivel por %d\n", a, b);
    }
    return 0;
}