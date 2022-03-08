#include <stdio.h>

int main()
{
    double wage;

    printf("Insira o seu salario => ");
    scanf("%lf", &wage);

    // vai até 1000 o aumento de 20%
    if (wage <= 1000)
    {
        printf("Novo salario: R$%.2lf", wage * 1.2);
    }
    else
    {
        printf("Novo salario: R$%.2lf", wage * 1.1);
    }
    return 0;
}