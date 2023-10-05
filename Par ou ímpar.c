#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

int numero;

setlocale(LC_ALL,"portuguese");

printf("Digite um número: ");
scanf("%d",&numero);

system("cls || clear");

if(numero %2 == 0){
    printf("É PAR!");
}else{
    printf("É ÍMPAR!");
}

getchar();
return 0;
}