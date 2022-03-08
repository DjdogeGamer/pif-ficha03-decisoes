#include <stdio.h>

int main()
{
    int day;

    printf("Informe o numero do dia da semana: \n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Domingo\n");
        break;

    case 2:
        printf("Segunda");
        break;

    case 3:
        printf("Terça");
        break;

    case 4:
        printf("Quarta");
        break;

    case 5:
        printf("Quinta");
        break;

    case 6:
        printf("Sexta");
        break;

    case 7:
        printf("Sabado");
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}