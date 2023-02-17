#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define less(A, B) (A < B)
#define exch(A, B) \
    int t = A;     \
    A = B;         \
    B = t;
#define cmp_exch(A, B) \
    if (less(B, A))    \
    {                  \
        exch(A, B);    \
    }

typedef struct Translate
{
    char pt[81], jp[81];
} Translate;

void translateV(char v[81], int tamT, Translate *traduc, int tamP)
{
    for (int i = 0; i < tamT; i++)
    {
        for (int j = 0; j < tamP; j++)
        {
            if ((v[j] == traduc[i].pt[j]) && (traduc[i].pt[j + 1] == '\0') && j == (tamP - 1))
            {
                printf("%s ", traduc[i].jp);
                return;
            }
            if (v[j] == traduc[i].pt[j])
                continue;
            break;
        }
    }
    printf("%s ", v);
}

int translate(int tamT, int tamM, Translate *traduc, char m[tamM][81])
{
    char v[80];
    int i = 0;
    for (int j = 0; j < tamM; j++)
    {
        for (int k = 0; m[j][k] != '\0'; k++)
        {
            if (m[j][k] == ' ')
            {
                v[i++] = '\0';
                translateV(v, tamT, traduc, i - 1);
                i = 0;
            }
            else if (m[j][k + 1] == '\0')
            {
                v[i++] = m[j][k];
                v[i++] = '\0';
                translateV(v, tamT, traduc, i - 1);
                i = 0;
            }
            else
                v[i++] = m[j][k];
        }
        printf("\n");
    }
}

int main()
{

    int t, m, n, i = 0, j;

    scanf("%d", &t);

    while (i < t)
    {
        scanf("%d%d", &m, &n);

        Translate *traduc = malloc(m * sizeof(Translate));

        char musica[n][81];

        for (j = 0; j < m; j++)
        {
            scanf(" %[^\n]", traduc[j].pt);
            scanf(" %[^\n]", traduc[j].jp);
        }

        for (j = 0; j < n; j++)
            scanf(" %[^\n]", musica[j]);

        translate(m, n, traduc, musica);

        printf("\n");

        i++;

        free(traduc);
    }
    return 0;
}
