#include <stdio.h>
#include <stdlib.h>

/**
 * Neste problema você receberá diversas strings de no máximo 30 caracteres, quando você identificar a string marte deverá imprimir
 * o nome do seu colega que veio deste planeta, caso não aconteça nenhuma ocorrência de marte, você deverá imprimir none.
 * A entrada possui um único caso de teste terminando em EOF.
*/

int main()
{
    char nome[30];
    int  et = 0;

    while ( scanf("%s", nome) != EOF ){
        if(strcmp(nome,"marte") == 0){
            printf("Leonardo Cicero Marciano\n");
            et = 1;
        }
    }
    if (et == 0)
        printf("none\n");
    return 0;
}
