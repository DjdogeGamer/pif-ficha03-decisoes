#include <stdio.h>

int main()
{
    int num;

    printf("Insira um numero => ");
    scanf("%d", &num);

    if (num > 20 && num < 90)
    {
        printf("Esta entre 20 e 90\n");
    }
    else
    {
        printf("Nao esta entre 20 e 90\n");
    }
    return 0;
}