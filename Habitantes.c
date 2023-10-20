#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int idade;
    char sexo;
    float salario;
    float QuantidadeMulheres = 0;
    int respostUsuario;
    float media;
    float somaSalarios;
    float quantidadeSalarios = 0;
    int idadeMaior = 0;
    int idadeMenor = 999;
    int codigo;

    while (respostUsuario != 2)
    {

        printf("Digite sua idade:");
        scanf("%d", &idade);

        fflush(stdin);

        printf("Digite seu sexo: ");
        scanf("%c", &sexo);

        printf("Informe seu salário: R$ ");
        scanf("%f", &salario);

        printf("Digite 1 para adicionar uma pessoa.\n");
        printf("Digite 2 para exibir os resultados.\n");
        scanf("%d", &respostUsuario);
        somaSalarios += salario;

        sexo = toupper(sexo);

        if (salario > 0)
        {
            quantidadeSalarios++;
        }

        if (sexo == 'F' && salario >= 5000)
        {
            QuantidadeMulheres++;
        }

        media = somaSalarios / quantidadeSalarios;

        idadeMaior = idadeMaior > idade ? idadeMaior : idade;
        idadeMenor = idadeMenor < idade ? idadeMenor : idade;

        fflush(stdin);
    }

    system("cls || clear");

    printf("Quantidade de mulheres que ganham mais de 5000 mil reais: %.1f \n", QuantidadeMulheres);
    printf("Média salarial do grupo: %.2f \n",media);
    printf("Maior idade: %d \n", idadeMaior);
    printf("Menor idade: %d \n", idadeMenor);

    getchar();
    return 0;
}