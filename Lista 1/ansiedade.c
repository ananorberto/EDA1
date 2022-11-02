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

int main(int argc, char const *argv[])
{
    char formulario[10];
    int triagem = 0;
    int sim = 0;
    int i, n;

    while(scanf("%s", formulario) != EOF){
        if(i == 10 && sim >= 2){
            triagem = 1;           
        }
        if(strcmp(formulario, "sim") == 0){
            sim++;
            i++;
            
        }
        
    }          
    printf("%i\n", triagem);
    return 0;
}

