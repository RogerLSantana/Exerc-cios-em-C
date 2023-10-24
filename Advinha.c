#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <ctype.h>

int main(){

setlocale(LC_ALL,"portuguese");

int numero = 0;


do
{

printf("Advinhe um número:");
scanf("%d",&numero);

    switch (numero)
    {
    case 1:
        printf("O número é maior que 1 \n");
        break;

        case 2:
        printf("O número é maior que 2 \n");

        break;

        case 3:
        printf("O número é maior que 3 \n");

        break;
        case 4:
        printf("O número é maior que 4 \n");
        break;

        case 6:
        printf("O número é menor que 6 \n");
        break;
        
        case 7:
        printf("O número é menor que 7 \n");
        break;

        case 8:
        printf("O número é menor que 8 \n");
        break;

        case 9:
        printf("O número é menor que 9 \n");
        break;

        case 10:
        printf("O número é menor que 10 \n");
        break;


    
    default:
        printf("O número não se enquadra nos quesitos\n");
        break;
    }
    system("cls || clear");
} while (numero != 5);

printf("Parabéns!!");

getchar();
return;
}