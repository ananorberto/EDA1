#include <stdio.h>

int main(void)
{
    int soma, resultado = 0, n, resposta;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &soma); 
        resultado += soma;        
    }
    scanf("%d", &resposta); 
    if (resultado == resposta)
    {
        printf("\nAcertou\n\n");
    }
    else{
        printf("\nErrou\n\n");
    }
    
    return 0;
}