#include <stdio.h>

int main()
{
    int choice, age;

    printf("1. Titanic (16 anos)\n2. Pica Pau (Livre)\n3. A volta de Jason (18 anos)\n4. Desistir\n");
    scanf("%d", &choice);
    printf("Agora insira a sua idade: \n");
    scanf("%d", &age);

    if (choice == 2)
    {
        printf("Voce comprou o filme Pica Pau\n");
    }
    else if (choice == 4)
    {
        printf("Ate mais\n");
    }
    else if (choice == 1 && age >= 16)
    {
        printf("Você comprou o filme Titanic\n");
    }
    else if (choice == 1 && age < 16)
    {
        printf("Voce nao tem idade para assistir ao filme\n");
    }
    else if (choice == 3 && age >= 18)
    {
        printf("Voce comprou o filme A Volta de Jason\n");
    }
    else if (choice == 3 && age < 18)
    {
        printf("Voce nao tem idade para assistir ao filme\n");
    }
    else
    {
        printf("Opcao invalida\n");
    }

    return 0;
}