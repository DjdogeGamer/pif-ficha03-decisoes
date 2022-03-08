#include <stdio.h>

int main()
{
    char op;
    float num1, num2;

    printf("Insira uma operacao a ser realizada: \n+ Adicao\n- Subtracao\n/ Divisao\n* Multiplicacao\n=> ");
    scanf("%c%*c", &op);
    printf("Insira dois numeros: \n=> ");
    scanf("%f%f", &num1, &num2);

    if (op == '+')
    {
        printf("Resultado: %f\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("Resultado: %f\n", num1 - num2);
    }
    else if (op == '/' && num2 != 0)
    {
        printf("Resultado: %f\n", num1 / num2);
    }
    else if (op == '*')
    {
        printf("Resultado: %f\n", num1 * num2);
    }
    else
    {
        printf("Operacao invalida\n");
    }
    return 0;
}