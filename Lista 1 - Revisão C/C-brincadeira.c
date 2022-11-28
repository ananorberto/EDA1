#include <stdio.h>

/**
 * Entrada
 A entrada contém vários casos de teste. A primeira linha de um caso de teste contém um único inteiro 1 \leq N \leq 10000 
 que indica o número de vezes que os amigos tiraram par-ou-ímpar. A segunda linha de um caso de teste contém N inteiros R_i ,
 separados por espaço, descrevendo a lista de resultados. Se R_i = 0 significa que Alice ganhou o i-ésimo jogo, se R_i = 1 
 significa que Beto ganhou o i-ésimo jogo (1 \leq i \leq N). O final da entrada é indicado por N = 0. A entrada deve ser 
 lida da entrada padrão.

*Saída
Para cada caso de teste da entrada seu programa deve produzir uma linha na saída, no formato 
Alice ganhou X e Beto ganhou Y, onde X \geq 0 e Y \geq 0. A saída deve ser escrita na saída padrão.
*/

int main()
{
    int n, i, alice=0, beto=0, r;
    scanf("%i", &n);

    while (n>0){

       for(i=0; i<n; i++){
        scanf("%i", &r);
        if(r == 0){
            alice++;
        }
        
        if(r == 1){
            beto++;
        }
    } 
     printf("Alice ganhou %i e Beto ganhou %i\n", alice, beto);
     beto = 0;
     alice = 0;
     scanf("%i", &n);
    }
    return 0;
}
