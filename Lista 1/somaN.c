#include <stdio.h>

/**
 * A entrada é composta de um único caso de teste. A primeira linha contém um inteiro positivo N.
 * As N linhas seguintes contêm cada uma um inteiro X, representando os N números a serem somados.
 * Seu programa deve produzir uma única linha na saída, contendo a soma de todos os N inteiros.
*/
int main()
{
    int n, soma, j, resultado=0;

    scanf("%i", &n);

    for(j=0; j<n; j++){
        scanf("%i", &soma);
        resultado += soma;
    }
    printf("%i\n", resultado);
    return 0;
}
