#include <stdio.h>

int main()
{
    int age, can = 0;

    // Como se trata de um exercicio de condicional simples, apenas utilizarei o if

    printf("Informe a sua idade => ");
    scanf("%d", &age);

    if (age >= 18 && age <= 67)
    {
        printf("Pode doar\n");
        can = 1;
    }

    // Utiizei uma variavel que caso a primeira seja executada, essa aqui nao sera
    if (can = 0)
    {
        printf("Nao pode\n");
    }

    return 0;
}