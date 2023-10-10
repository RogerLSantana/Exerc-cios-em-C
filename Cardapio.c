#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int codigo;

    setlocale(LC_ALL, "portuguese");

    printf("codigo 1 \t Picanha      \tR$25\n");
    printf("codigo 2 \t Lasanha   \t R$20\n");
    printf("codigo 3 \t Strogonoff\t R$18\n");
    printf("codigo 4 \t Bife Acebolado\t R$15\n");
    printf("codigo 5 \t Pão com ovo\t R$5\n");
    printf("Qual o código do prato desejado:");
    scanf("%d", &codigo);

    system("cls || clear");

    switch (codigo)
    {
    case 1:
        printf("Prato escolhido: Picanha\n");
        printf("Valor: R$25 \n");
        break;
    case 2:
        printf("Prato escolhido: Lasanha \n");
        printf("Valor: R$20 \n");
        break;
    case 3:
        printf("Prato escolhido: Strogonoff\n");
        printf("Valor: R$18 \n");
        break;
    case 4:
        printf("Prato escolhido: \n");
        printf("Valor: R$15 \n");

        break;
    case 5:
        printf("Prato escolhido: Bife Acebolado \n");
        printf("Valor: R$15 \n");
        break;
    default:
        printf("Prato Inválido.\n");
    }
}