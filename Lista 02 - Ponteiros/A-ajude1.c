#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    int soma, resultado;

    scanf("%d %d %d\n%d", &n1, &n2, &n3, &resultado); 

    soma = n1 + n2 + n3;

    if (resultado == soma)
    {
        printf("Acertou\n\n");
    }
    else{
        printf("\nErrou\n\n");
    }
    
    return 0;
}
