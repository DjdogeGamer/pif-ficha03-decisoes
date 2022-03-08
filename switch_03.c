#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, choice;

    printf("1. Raiz quadrada de um numero\n2. Seno de um numero\n");
    printf("3. Produto entre o quadrado de um numero e o coseno de outro numero\n");
    printf("4. Soma entre 2 numeros\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Informe um numero: \n");
        scanf("%d", &num1);
        printf("Raiz quadrada: %.2lf", sqrt(num1));
        break;

    case 2:
        printf("Informe um numero: \n");
        scanf("%d", &num1);
        printf("Seno: %.2lf", sin(num1));
        break;

    case 3:
        printf("Informe dois numeros: \n");
        scanf("%d%d", &num1, &num2);
        printf("Produto entre o quadrado e o coseno: %.4lf", pow(num1, 2) * cos(num2));
        break;

    case 4:
        printf("Informe dois numeros \n");
        scanf("%d%d", &num1, &num2);
        printf("Soma: %d", num1 + num2);
        break;

    default:
        printf("Opcao invalida\n");
        break;
    }

    return 0;
}