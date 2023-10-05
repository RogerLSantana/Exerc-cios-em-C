#include <stdio.h>
#include <stdio.h>

int main()
{

    int quantidade;
    int valorUnitario;
    float precoFinal;

    printf("Digite a quantidade de maças: ");
    scanf("%d", &quantidade);

    valorUnitario = quantidade < 12 ? 1.30 : 1.0;

    precoFinal = quantidade * valorUnitario;

    printf("Quantidade de maças: %d \n", quantidade);
    printf("Preço unitário: R$ %.2f \n", valorUnitario);
    printf("Preço final: R$ %.2f \n", precoFinal);

    getchar();
    return 0;
}