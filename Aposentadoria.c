#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int idade;
    int TempoDeTrabalho;
    int codigo;
    int anoNascimento;

    setlocale(LC_ALL, "portuguese");

    printf("Qual seu ano de nascimento:");
    scanf("%d", &anoNascimento);
    printf("Qual o seu tempo de contribuição?:");
    scanf("%d", &TempoDeTrabalho);
    printf("Qual seu código:");
    scanf("%d", &codigo);

    system("cls || clear");

    idade = 2023 - anoNascimento;

    printf("Código: %d\n", codigo);
    printf("Idade %d \n", idade);
    printf("Tempo de trabalho: %d \n", TempoDeTrabalho);

    if (idade >= 65 || TempoDeTrabalho >= 30)
    {
        printf("Requerer aposentadoria");
    }
    else
    {
        printf("Não requerer aposentadoria");
    }

    getchar();
    return 0;
}