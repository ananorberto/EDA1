#include <stdio.h>
#include <stdlib.h>

void print(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", v[i]);
        if (i == n - 1) printf("\n");
        printf(" ");
    }  
}

void merge(int *v, int t1, int *v2, int t2)
{
    int *vetor = (int *)malloc((t1 + t2)*sizeof(int));
    int i = 0, j = 0;
    int k = 0;

    for(; i < t1 && j < t2; k++)
    {
        
        if (v[i] <= v2[j])  vetor[k] = v[i++];
        else    vetor[k] = v2[j++];        
    }
    while (t1 > i)  vetor[k++] = v[i++];
    while (t2 > j)  vetor[k++] = v2[j++];

    for (int k = 0, i = 0; i < (t1 + t2); i++, k++)   v[i] = vetor[k];

    free(vetor);

}
int v[100001], res[800008];

int main(void)
{
    int n = 0;
    for (int i = 0; i < 8; i++)
    {
        int tam = 0;
        scanf(" %d", &tam);
        for (int j = 0; j < tam; j++)   scanf(" %d", &v[j]);

        merge(res, n, v, tam);
        n += tam;
    }
    print(res, n);

    return 0;
}

