#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    int Numero1;
    int Numero2;
    int Numero3;
    int maiorNumero;
    int menorNumero;

    setlocale(LC_ALL,"portuguese"); 
    
    printf("Digite o primeiro número: ");
    scanf("%d", &Numero1);

    printf("Digite o primeiro número: ");
    scanf("%d", &Numero2);

    printf("Digite o terceiro número ");
    scanf("%d", &Numero3);

    system("cls || clear");

    /*
    if (Numero1 > Numero2 && Numero1 > Numero3)
    {
        maiorNumero = Numero1;
        
    }
    else if (Numero2 > Numero1 && Numero2 > Numero3){
    
        maiorNumero = Numero2;
    }
    else if(Numero3 > Numero1 && Numero3 > Numero2){
            maiorNumero = Numero3;
    }

//Menor Número

if (Numero1 < Numero2 && Numero1 < Numero3)
    {
        menorNumero = Numero1;
        
    }
    else if (Numero2 < Numero1 && Numero2 < Numero3){
    
        menorNumero = Numero2;
    }
    else if   (Numero3 < Numero1 && Numero3 < Numero2){
            menorNumero = Numero3;
    }
    


    */

   maiorNumero = Numero1 > Numero2 ? Numero1 : Numero2 ;
   maiorNumero = maiorNumero > Numero3 ? maiorNumero : Numero3;

   menorNumero = Numero1 < Numero2 ? Numero1 : Numero2;
   menorNumero =  menorNumero < Numero3 ? menorNumero : Numero3;


    printf("Primeiro Número: %d \n",Numero1);
    printf("Segundo Número: %d \n",Numero2);
    printf("Terceiro Número: %d \n",Numero3);
    printf("Maior Número: %d \n",maiorNumero);
    printf("Menor Número: %d \n",menorNumero);
    
    getchar();

    return 0;
}