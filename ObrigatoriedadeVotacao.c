#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int idade;

    setlocale(LC_ALL, "portuguese");

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    system("cls || clear");

    if (idade >= 18 && idade <= 65)
    {
        printf("� obrigado a votar!");
    }
    else
    {
        printf("N�o � obrigado a votar!");
    }

    getchar();

    return 0;
}
