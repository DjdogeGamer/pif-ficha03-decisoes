#include <stdio.h>

int main()
{
    int age, choice, qtd;
    float total_price = 0;

    printf("Informe a sua idade: \n");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("Voce eh de menor e nao pode comprar bebidas\n");
    }
    else
    {
        printf("1. Whisky\n2. Vodka\n3. Cerveja\n4. Cachaça\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Codigo: 100 || Nome: Whisky1 || Preço: 200\n");
            printf("Codigo: 101 || Nome: Whisky2 || Preço: 150\n");
            printf("Codigo: 102 || Nome: Whisky3 || Preço: 140\n");
            scanf("%d %d", &choice, &qtd);
            switch (choice)
            {
            case 100:
                total_price = 200 * qtd;
                break;
            case 101:
                total_price = 150 * qtd;
                break;
            case 102:
                total_price = 140 * qtd;
                break;
            default:
                printf("Opcao invalida");
                break;
            }
            break;
        case 2:
            printf("Codigo: 200 || Nome: Vodka1 || Preço: 60\n");
            printf("Codigo: 201 || Nome: Vodka2 || Preço: 40\n");
            printf("Codigo: 202 || Nome: Vodka3 || Preço: 30\n");
            scanf("%d %d", &choice, &qtd);
            switch (choice)
            {
            case 200:
                total_price = 60 * qtd;
                break;
            case 201:
                total_price = 40 * qtd;
                break;
            case 202:
                total_price = 30 * qtd;
                break;
            default:
                printf("Opcao invalida");
                break;
            }
            break;
        case 3:
            printf("Codigo: 300 || Nome: Cerveja1 || Preço: 1.50\n");
            printf("Codigo: 301 || Nome: Cerveja2 || Preço: 2.00\n");
            printf("Codigo: 302 || Nome: Cerveja3 || Preço: 3.00\n");
            scanf("%d %d", &choice, &qtd);
            switch (choice)
            {
            case 300:
                total_price = 1.5 * qtd;
                break;
            case 301:
                total_price = 2 * qtd;
                break;
            case 302:
                total_price = 3 * qtd;
                break;
            default:
                printf("Opcao invalida");
                break;
            }
            break;
        case 4:
            printf("Codigo: 400 || Nome: Cachaça1 || Preço: 8\n");
            printf("Codigo: 401 || Nome: Cachaça2 || Preço: 20\n");
            printf("Codigo: 402 || Nome: Cachaça3 || Preço: 22\n");
            scanf("%d %d", &choice, &qtd);
            switch (choice)
            {
            case 400:
                total_price = 8 * qtd;
                break;
            case 401:
                total_price = 20 * qtd;
                break;
            case 402:
                total_price = 22 * qtd;
                break;
            default:
                printf("Opcao invalida");
            }
            break;
        default:
            printf("Opcao invalida");
            break;
        }

        if (qtd < 1)
        {
            printf("Quantidade invalida");
        }
        else if (total_price > 0)
        {
            if (qtd > 100)
            {
                total_price -= total_price * 0.35;
            }
            else if (qtd > 50)
            {
                total_price -= total_price * 0.3;
            }
            else if (qtd > 5)
            {
                total_price -= total_price * 0.1;
            }

            printf("Você escolheu a bebida de código %d\nQuantidade: %d\nValor a ser pago: R$%.2f", choice, qtd, total_price);
        }
    }

    return 0;
}