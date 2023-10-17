#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, numero;
    int pares = 0;
    int impares = 0;

    setlocale(LC_ALL, "portuguese");
    for (i = 1; i <= 5; i++)
    {
        printf("Digite o %dº número: \n", i);
        scanf("%d", &numero);
        
        // operadores ternários:
        // numero % 2 == 0 ? pares++ : impares++;

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            (numero % 2 != 0);
            impares++;
        }
    }

    printf("Números pares: %d \n", pares);
    printf("Números ímpares: %d \n", impares);

    getchar();
    return 0;
}