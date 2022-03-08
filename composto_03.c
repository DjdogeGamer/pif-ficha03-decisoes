#include <stdio.h>
#include <ctype.h>

int main()
{
    char sex;
    int age;

    printf("Insira 'm' para masculino e 'f' para feminino, e em seguida sua idade => ");
    scanf("%c %d", &sex, &age);

    // Converte para minusculo para nao ser case sensitive
    sex = tolower(sex);

    if (sex == 'f' && age < 25)
    {
        printf("ACEITA\n");
    }
    else
    {
        printf("NAO ACEITA\n");
    }
    return 0;
}