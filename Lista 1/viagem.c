#include <stdio.h>
/**
 * 
Saída
Para cada dia de viagem, o seu programa, deve imprimir três linhas. A primeira linha deve conter a frase Dia n, com n
sendo o dia da viagem começando por 1, na segunda linha o código do restaurante com a maior nota, quando houver empate
 imprima o menor código e por fim a terceira linha deve ser deixada em branco.

 * Exemplo de entrada
5 100 5 200 3 50 1 400 1 201 2
6 50 2 400 4 10 5 20 5 5 5 90 3
2 20 3 21 3

 *Saída para o exemplo de entrada
    Dia 1  Dia 2  Dia 3
    100    5      20
*/

int main()
{
    int nota;
    int cod; 
    int rest;
    int dia = 0;

    while (scanf("%d", &rest) != EOF)
    {
        dia++;
        int maxNota = 0;
        int mCod = 23456789;
        for (int i = 0; i < rest; i++)
        {   
            scanf("%d %d", &cod, &nota);
        
            if (nota > maxNota)
            {
                maxNota = nota;
                mCod = cod;
            }
            else if (nota == maxNota && cod < mCod)
            {
                mCod = cod;
            }
        }  
        printf("Dia %d\n", dia);
        printf("%d\n\n", mCod);
    }
    
    return 0;
}
