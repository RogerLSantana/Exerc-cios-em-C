#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    int i, numero, soma;

    setlocale(LC_ALL, "portuguese");

    soma = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite %dº número:  \n", i);
        scanf("%d", &numero);
        soma = numero + soma;
    }

    printf("Soma de todos os números: %d", soma);

    getchar();
    return 0;
}
