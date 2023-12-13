#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void limpatela()
{

    system("cls || clear");
}

int main()
{
    char loginCorreto[200] = "123456";
    char senhaCorreta[200] = "123";
    char loginInserido[200];
    char senhaInserida[200];

    do
    {
        printf("Digite seu login:");
        gets(loginInserido);
        printf("Digite sua senha:");
        gets(senhaInserida);

        if (strcmp(loginInserido, loginCorreto) == 0 && strcmp(senhaInserida, senhaCorreta) == 0)
        {
            printf("Entrando no sistema...");
            sleep(2);
        }
        else
        {
            printf("Login ou senha incorreta.\n");
        }

    } while (strcmp(loginCorreto, loginInserido) != 0 || strcmp(senhaCorreta, senhaInserida) != 0);

    limpatela();

    // PARTE FOLHA DE PAGAMENTO :

    int i;
    int posicao = 0;
    int codigo;
    int valorHora = 5;
    int horasTrabalhadas = 0;
    float capitalTotal = 500000;
    float valorSalario = 0;

    do
    {
        printf("-----------Menu-----------\n");
        printf("Para realizar um pagamento  digite 1\n");
        printf("Para sair da folha de pagamento digite 2\n");
        scanf("%d", &codigo);

        if (codigo == 1)
        {
            posicao++;
        }

        for (i = 0; i < posicao; i++)
        {
            printf("%d° funcionário:\n", i + 1);
            printf("Digite a quantidade de horas trabalhadas pelo funcionário selecionado:");
            scanf("%d",&horasTrabalhadas);
            
            valorSalario = valorHora * horasTrabalhadas;
        }

    } while (codigo != 2);

    for ( i = 0; i < posicao; i++)
    {
        printf("Valor do salario do %d funcionário: %.2f",i+1,valorSalario);
    }
    
    getchar();
    return 0;
}