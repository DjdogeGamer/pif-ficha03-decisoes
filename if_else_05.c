#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Insira tres valores: \n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b) > c || (b + c) > a || (c + a) > b)
    {
        printf("Pode ser triangulo\n");

        if (a == b && b == c)
        {
            printf("Equilatero\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isosceles");
        }
        else
        {
            printf("Escaleno");
        }
    }
    else
    {
        printf("Nao pode ser triangulo \n");
    }

    return 0;
}