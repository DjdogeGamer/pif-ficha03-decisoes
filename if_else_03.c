#include <stdio.h>

int main()
{
    float lab, sem, fin, avg, rec;

    printf("Insira as 3 notas: \n=> ");
    scanf("%f%f%f", &lab, &sem, &fin);

    avg = ((lab * 2) + (sem * 3) + (fin * 5)) / 10;

    if (avg >= 5)
    {
        printf("Aprovado\n");
    }
    else if (avg >= 3)
    {
        printf("Recuperacao\n");
        printf("Insira a nota de recuperacao: \n=> ");
        scanf("%f", &rec);
        if ((rec + avg) / 2.0 >= 5)
        {
            printf("Aprovado\n");
        }
        else
        {
            printf("Reprovado\n");
        }
    }
    else
    {
        printf("Reprovado\n");
    }
    return 0;
}