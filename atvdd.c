#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int quantidadeNotas = 0;
    char respotaNota;
    float nota, mediaNotas;
    float soma = 0;

    do
    {
        printf("Digite sua nota: ");
        scanf("%f", &nota);
        fflush(stdin);

        printf("Deseja informar mais uma nota?\n");
        scanf("%c", &respotaNota);

        if (respotaNota == 'n')
        {
            respotaNota = toupper(respotaNota);
        }

        if (nota >= 0)
        {
            quantidadeNotas++;
            soma += nota;
        }

        mediaNotas = soma / (float)quantidadeNotas;

    } while (respotaNota != 'N');

    system("cls || clear");

    printf("Média: %.2f", mediaNotas);

    getchar();
    return 0;
}