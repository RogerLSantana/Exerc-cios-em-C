#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "protuguese");

    int i, numero;

    printf("digite um numero de 1 at� 10: \n");
    scanf("%d", &numero);

    /* de 1 at� 10
       para i de i at� 10 passo 1 fa�a
       i=i+2
       i+=2
    */

    setlocale(LC_ALL, "portuguese");

    printf("Tabuada do %d\n", numero);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", numero, i, numero * i);
    }

    getchar();
    return 0;
}