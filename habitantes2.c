#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo;
    int numeroFilhos = 0;
    int quantidadeHabitante = 0;
    float salario = 0;
    float maiorSalario = 0;
    float menorSalario = 9999999;
    float mediaSalario = 0;
    float mediaNumeroFilhos = 0;
    float soma = 0;
    float filhos;

    do
    {
        printf("1              |             Adicionar familia \n");
        printf("2              |             Sair e exibir resultados \n");
        printf("Digite o código: ");
        scanf("%d", &codigo);

        if (codigo == 1)
        {
            quantidadeHabitante++;
            printf("qual o seu salário\n");
            scanf("%f", &salario);
            printf("Quantidade de filhos:\n");
            scanf("%d", &numeroFilhos);

            filhos += numeroFilhos;
            mediaNumeroFilhos = filhos / quantidadeHabitante  ;
            soma += salario;
            mediaSalario = soma / (float)quantidadeHabitante;
            maiorSalario = maiorSalario > salario ? maiorSalario : salario;
            menorSalario = menorSalario < salario ? menorSalario : salario;
        }
        else if (codigo != 1 && codigo != 2)
        {
            printf("Codigo inválido,digite novamente. \n");
        }
    } while (codigo != 2);
            
   
    printf("Média número de filhos: %.1f \n", mediaNumeroFilhos);
    printf("Total de famílias que responderam a pesquisa: %d \n", quantidadeHabitante);
    printf("Media do Salário da população: %.2f \n", mediaSalario);
    printf("Maior Salario: %.2f \n", maiorSalario);
    printf("Menor Salario: %.2f \n", menorSalario);
    
    getchar();
    return 0;
}