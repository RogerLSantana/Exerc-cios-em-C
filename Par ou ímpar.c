#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

int numero;

setlocale(LC_ALL,"portuguese");

printf("Digite um n�mero: ");
scanf("%d",&numero);

system("cls || clear");

if(numero %2 == 0){
    printf("� PAR!");
}else{
    printf("� �MPAR!");
}

getchar();
return 0;
}