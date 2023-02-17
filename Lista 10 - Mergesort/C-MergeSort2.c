#include <stdio.h>
#include <stdlib.h>

void merge(int v[], int l, int r1, int r2)
{
    int v2[r2 - l+1]; //vetor auxiliar
    int k = 0; //variável auxiliar
    int p = l; //movimenta 1° parte do vetor
    int j = r1 + 1; //movimenta 2° parte do vetor

    for (int i = l; i <= r2; i++)
    {
        if (p > r1) v2[k++] = v[j++];

        else if (j > r2) v2[k++] = v[p++];  

        else if (v[p] < v[j]) v2[k++] = v[p++];

        else v2[k++] = v[j++];        

    }
     
    for (int p = 0; p < k; p++)
        v[l++] = v2[p];

}

void mergeSort(int v[], int l, int r)
{
    if(l>=r) return;
    int meio = (l+r)/2;

    mergeSort(v, l, meio);
    mergeSort(v, meio+1, r);

    merge(v, l, meio, r);
    
}

int main(void)
{
    int *v, i=0;

    v = malloc(sizeof(int)*50000);
    
    while (scanf("%d", &v[i]) != EOF) i++;

    mergeSort(v, 0, i - 1);

    for (int j = 0; j < i; j++)
    printf("%d ", v[j]);
    printf("\n");

}