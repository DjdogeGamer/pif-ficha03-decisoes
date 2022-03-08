#include <stdio.h>

int main()
{
    int code, qt;
    float price = 0;

    printf("100 || Cachorro-Quente || R$1.20\n");
    printf("101 || Bauru simples || R$1.30\n");
    printf("102 || Bauru com ovo || R$1.50\n");
    printf("103 || Hamburuguer || R$1.20\n");
    printf("104 || Cheeseburguer || R$1.30\n");
    printf("105 || Refrigerante || R$1.00\n");
    printf("\nInsira o código e a quantidade: \n");
    scanf("%d%d", &code, &qt);

    if (qt > 0)
    {
        switch (code)
        {
        case 100:
            price = 1.2 * (float)qt;
            break;
        case 101:
            price = 1.3 * (float)qt;
            break;
        case 102:
            price = 1.5 * (float)qt;
            break;
        case 103:
            price = 1.2 * (float)qt;
            break;
        case 104:
            price = 1.3 * (float)qt;
            break;
        case 105:
            price = qt;
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    }
    else
    {
        printf("Opcao invalida\n");
    }

    if (price > 0)
    {
        printf("Total a ser pago: R$%.2f", price);
    }

    return 0;
}