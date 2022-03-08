#include <stdio.h>

int main()
{
    int num;

    // Como se trata de condicional simples, apenas utilizarei o if
    printf("Insira um numero => ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("E par\n");
    }
    if (num % 2 == 1)
    {
        printf("E impar\n");
    }

    return 0;
}