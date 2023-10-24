#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char login[200];
    char loginCorreto[200] = "0";
    char senha[200];
    char senhaCorreta[200] = "0";

    do
    {
        printf("digite seu login:");
        gets(login);

        printf("digite sua sua senha:");
        gets(senha);

        if (strcmp(loginCorreto, login) == 0 && strcmp(senhaCorreta, senha) == 0)
        {
            printf("Bem vindo!!!");
        }
        else
        {
            printf("Login ou senha incorreto. \n");
        }
    } while (strcmp(loginCorreto, login) != 0 || strcmp(senhaCorreta, senha) != 0);

        getchar();
        return 0;
}