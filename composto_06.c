#include <stdio.h>

int main()
{
    float wage, inst;

    printf("Insira o salario e a prestacao => ");
    scanf("%f%f", &wage, &inst);

    if (inst >= wage * 0.3)
    {
        printf("Nao pode");
    }
    else
    {
        printf("Pode");
    }

    return 0;
}