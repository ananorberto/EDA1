#include <stdio.h>

/**
 * TAREFA
Para este problema você deverá ler diversos números e imprimir a quantidade de números lidos.

*ENTRADA
A entrada é composta por um único caso de teste composta por diversas linhas e termina com EOF. Cada linha de um
caso de teste possui um número inteiro N ( 0 ≤ N ≤ 107).

*SAÍDA
A saída é composta por uma única linha contendo um número inteiro que represente a quantidade de números lidos.
*/

int main()
{
    int n, s = 0;
   
    while (scanf("%d", &n) == 1)
        s++;
        printf("%d\n", s);
    return 0;
}
