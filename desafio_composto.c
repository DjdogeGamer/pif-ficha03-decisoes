#include <stdio.h>

int main()
{
    float r, c1, c2, p1, p2, distance;

    printf("Insira os valores da circunferencia => ");
    scanf("%f%f%f", &r, &c1, &c2);

    printf("Insira os valores do ponto => ");
    scanf("%f%f", &p1, &p2);

    // calcula a distância entre o centro da circunferência e o ponto
    distance = (pow((p1 - c1), 2) + pow((p2 - c2), 2));
    distance = sqrt(distance);

    // se a distância entre o ponto e o centro for menor do que o raio, logo está dentro
    if (distance < r)
    {
        printf("Estah dentro\n");
    }
    // se for igual, então está na linha da circunferência
    else if (distance == r)
    {
        printf("Tangente\n");
    }
    // se for maior, está fora do círculo
    else
    {
        printf("Estah fora");
    }

    return 0;
}