#include <stdio.h>

int main()
{
    int n_participantes, n_partidas, soma;

    while(scanf("%d %d", &n_participantes, &n_partidas))
    {
        char pais[n_participantes][11];
        int pts[n_participantes];
        soma = 0;

        if (n_participantes == 0) break;
        
        for (int i = 0; i < n_participantes; i++)
        {
            scanf(" %s %d", pais[i], &pts[i]);
            soma = soma + pts[i];
        }

        printf("%d\n", (n_partidas*3) - soma);      
        
    }
    return 0;
}
