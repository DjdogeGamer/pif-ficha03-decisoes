#include <stdio.h>

int main()
{
    double wage, inst;

    printf("Insira o salario e a prestacao => ");
    scanf("%lf%lf", &wage, &inst);

    // Verifica se installment e maior que 30% do salario
    if (inst > wage * 0.3)
    {
        printf("Nao pode");
    }
    else
    {
        printf("Pode");
    }

    return 0;
}