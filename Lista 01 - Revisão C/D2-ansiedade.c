#include <stdio.h>
#include <stdlib.h>

/**
 * Entrada
A entrada é composta por um único caso de teste contendo vários formulários. Cada formulário possui exatamente 10
linhas, onde, cada linha possui a palavra sim ou nao, sendo a resposta para cada uma das perguntas.
A entrada termina em EOF.

*Saída
A saída é composta por uma única linha contendo um número inteiro informando quantas vezes Ricardo precisou fazer a
triagem.
*/

int main()
{
    char formulario[10];
    int triagem = 0, sim = 0, form = 0;

    while(scanf("%s", &formulario) != EOF){
        form++;

        if (strcmp(formulario, "sim") == 0){
            sim++;
        }
        if (sim >=2 && form == 10){
            form = 0;
            sim = 0;
            triagem++;
        }
        if (form == 10){
            form = 0;
            sim = 0;
        }
        
    }
    printf("%i\n", triagem);  
    return 0;      
}


