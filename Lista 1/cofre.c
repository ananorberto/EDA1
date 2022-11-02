#include <stdio.h>


/**
 * Entrada
A entrada é composta de vários conjuntos de teste. A primeira linha de um conjunto de teste contém um número inteiro N,
que indica o número de depósitos nos cofrinhos. As N linhas seguintes descrevem cada uma um depósito nos cofrinhos; 
o depósito é indicado por dois valores inteiros J e Z, separados por um espaço em branco, representando respectivamente 
os valores, em centavos, depositados nos cofres de Joãozinho e Zezinho. O final da entrada é indicado por N = 0.

*Saída
Para cada conjunto de teste da entrada seu programa deve produzir um conjunto de linhas na saída. A primeira linha deve
conter um identificador do conjunto de teste, no formato “Teste n”, onde n é numerado seqüencialmente a partir de 1. 
A seguir seu programa deve escrever uma linha para cada depósito do conjunto de testes. Cada linha deve conter um inteiro
que representa a diferença (em centavos) entre o valor depositado nos cofrinhos do Joãozinho e do Zezinho. Deixe uma 
linha em branco ao final de cada conjunto de teste.
*/
int main()
{
    int n = 0, J = 0, Z = 0, i;
    int t = 1, dif = 0, c;
    scanf("%i", &n);

    while (n != 0)
    {
        J = 0;
        Z = 0;
        dif = 0;
        
        printf("Teste %i\n", t);
        t++;
        
        while(n--){
            scanf("%i %i", &J, &Z);
            c = J - Z;
            dif += c;
            printf("%d\n", dif);
        } 
        printf("\n");
        scanf("%i", &n);
    }
    return 0;
}
