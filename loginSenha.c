#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    char loginResposta[200] = "Roger";
    char login[200];
    char senhaResposta[200] = "senai123";
    char senha[200];

    setlocale(LC_ALL, "portuguese");

    printf("Digite seu login: ");
    gets(loginResposta);

    printf("Digite sua Senha: ");
    gets(senhaResposta);

    // string comparator

    if (strcmp(loginResposta, login) == 0 && strcmp(senhaResposta, senha) == 0)
    {
        printf("Bem vindo!");
    }
    else
    {
        printf("Login ou senha Inválidos!");
    }

    getchar();
    return 0;
}