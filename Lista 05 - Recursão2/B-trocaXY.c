#include <stdio.h>

void trocaXY(char *str)
{   
    if(*str =='\0') return;

    else if(*str == 'x')
    {
        *str = 'y';
        return trocaXY(str + 1);
    }
    else trocaXY(str + 1);
}
int main()
{
    char string[81];
    scanf(" %s", string);

    trocaXY(string); //passando parametro por referencia
    printf("%s\n", string);

    return 0;
}
