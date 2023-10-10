#include <stdio.h>
#include <stdlib.h>.
#include <locale.h>
#include <string>
int main(){
setlocale(LC_ALL, "portuguese");
float primeiranota;
float segundanota;
float media;
char resultado[200];


printf("digite a primeira nota: ");
scanf("%f", &primeiranota);

printf("digite segunda nota: ");
scanf("%f", &segundanota);
system("cls || clear");

media = (primeiranota + segundanota) / 2;
printf("media: %.1f\n", media);
if (media >= 7){
strcpy(resultado, "aprovado"); 
} else {
    strcpy(resultado, "reprovado");
}
    
return 0;
}