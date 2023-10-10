#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int dia;
    setlocale(LC_ALL, "portuguese");

    printf("1- Domingo \n");
    printf("2- Segunda \n");
    printf("3- Terça \n");
    printf("4- Quarta \n");
    printf("5- Quinta \n");
    printf("6- Sexta\n");
    printf("7- Sábado \n ");
    printf("Digite o dia da semana:");
    scanf("%d",&dia);

system("cls || clear");

    switch (dia)
    {
    case 1:
    case 7:
        printf("Final de semana.\n");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia útil.\n");
        break;

    default:
        printf("Dia inválido\n");
    }
    getchar();
    return 0;
}
