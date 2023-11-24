#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    char nome[5][200];
    int idade[5];
    float peso[5];
    float altura[5];
    float maiorAltura;
    float menorAltura;
    float maiorPeso;
    float menorPeso;
    int maiorIdade;
    int menorIdade;

    char nomeMaisAltura[200];
    char nomeMenosAltura[200];
    char nomeMaisIdade[200];
    char nomeMenosIdade[200];
    char nomeMaisPeso[200];
    char nomeMenosPeso[200];

    for (i = 0; i < 5; i++)
    {
        printf("Digite seu nome:");
        gets(nome[i]);
        fflush(stdin);

        printf("Digite sua idade:");
        scanf("%d", &idade[i]);

        if (idade[i] > maiorIdade)
        {
            maiorIdade = idade[i];
            strcpy(nomeMaisIdade, nome[i]);
        }
        if (idade[i] < menorIdade)
        {
            menorIdade = idade[i];
            strcpy(nomeMenosIdade, nome[i]);
        }

        printf("Digite seu peso:");
        scanf("%f", &peso[i]);

        if (peso[i] > maiorPeso)
        {
            maiorPeso = peso[i];
            strcpy(nomeMaisPeso, nome[i]);
        }
        if (peso[i] < maiorPeso)
        {
            menorPeso = peso[i];
            strcpy(nomeMenosPeso, nome[i]);
        }

        printf("Digite sua altura:");
        scanf("%f", &altura[i]);

        if (altura[i] > maiorAltura)
        {
            maiorAltura = altura[i];
            strcpy(nomeMaisAltura, nome[i]);
        }
        if (altura[i] < menorAltura)
        {
            menorAltura = altura[i];
            strcpy(nomeMenosAltura, nome[i]);
        }

        fflush(stdin);
        printf("\n");
    }

    printf("Pessoa mais alta: %s \t altura:%.2f\n", nomeMaisAltura, maiorAltura);
    printf("Pessoa menos alta: %s \t altura:%.2f\n", nomeMenosAltura, menorAltura);
    printf("\n");
    printf("Pessoa com mais peso: %s \t peso:%.2f\n", nomeMaisPeso, maiorPeso);
    printf("Pessoa com menos peso: %s \t peso:%.2f\n", nomeMenosPeso, menorPeso);
    printf("\n");
    printf("Pessoa com mais idade: %s \t idade:%d\n", nomeMaisIdade, maiorIdade);
    printf("Pessoa com menos idade: %s \t idade:%d\n", nomeMenosIdade, menorIdade);
    printf("\n");
    printf("pessoa menos alta: %s", nomeMenosAltura);
    printf("altura:", menorAltura);
    getchar();
    return 0;
}