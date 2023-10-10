#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{

    char sexo;
    float altura;
    float pesoIdeal;

    setlocale(LC_ALL, "portuguese");

    printf("Qual seu sexo:");
    scanf("%c", &sexo);

    printf("Qual sua altura:");
    scanf("%f", &altura);

    system("cls || clear");

    printf("Sexo: %c \n", sexo);
    printf("Altura: %.2f \n", altura);

    // sexo = tolower; converte em minusculo

    // converte em maiúsculo
    sexo = toupper(sexo);

    switch (sexo)
    {
    case 'M':
        pesoIdeal = (72.7 * altura) - 58;
        printf("Peso Ideal: %.2f", pesoIdeal);
        break;
    case 'F':
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("%.2f", pesoIdeal);

    default:
        printf("Sexo inválido.");
        break;
    }
    return 0;
}