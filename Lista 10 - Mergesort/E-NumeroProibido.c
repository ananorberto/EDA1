#include <stdio.h>
#include <stdlib.h>

void merge(int *v, int l, int r1, int r2)
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

void mergeSort(int *v, int l, int r)
{
    if (l < r)
    {
    int meio = (l+r) / 2;

    mergeSort(v, l, meio);
    mergeSort(v, meio + 1, r);

    merge(v, l, meio, r);
    }
}
int busca(int *v, int l, int r, int b){
    if(r<l) {
        return -1;
    }

    int meio = (l+r)/2;

    if(v[meio] < b){ // meio < b
        return busca(v,meio+1,r, b);

    } else if(b < v[meio]){ // b < meio
        return busca(v,l,meio-1,b);
        
    } else{
        return meio;
    }

} 

int main()
{
    int n;
    scanf("%d", &n);

    int *nProib = malloc((sizeof(int)) * n);

    for (int i = 0; i < n; i++)    scanf("%d", &nProib[i]);

    mergeSort(nProib, 0, n-1);

    int num;
    while (scanf("%d", &num) != EOF)
    {
        int resposta = busca(nProib, 0, n - 1, num);
        resposta == -1 ? printf("nao\n"):
        printf("sim\n");
    }

    return 0;
}
