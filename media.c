#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i = 0;
    float soma = 0;
    float numero;
    float media;

    do
    {
        printf("Digite %dº valor: \n", i + 1);
        scanf("%f", &numero);

        if (numero > 0)
        {

            soma += numero;
            i++;
        }

    } while (numero >= 0);

    media = soma / i;

    printf("Média: %.2f", media);

    getchar();
    return 0;
}