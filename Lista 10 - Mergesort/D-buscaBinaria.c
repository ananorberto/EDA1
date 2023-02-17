#include <stdio.h>

#define less(A,B) (A < B)
#define exch(A,B) Item t = A; A = B; B = t;

typedef struct 
{
   int pos; //salva a posição
   int elemento; //salva o elemento
}Item;

void merge(Item v[], int l, int r1, int r2)
{
    int v2[r2 - l+1]; //vetor auxiliar
    int k = 0; //variável auxiliar
    int p = l; //movimenta 1° parte do vetor
    int j = r1 + 1; //movimenta 2° parte do vetor

    for (int i = l; i <= r2; i++)
    {
        if (p > r1) v2[k++] = v[j++].elemento;

        else if (j > r2) v2[k++] = v[p++].elemento;  

        else if (v[p].elemento < v[j].elemento) v2[k++] = v[p++].elemento;

        else v2[k++] = v[j++].elemento;        

    }
     
    for (int p = 0; p < k; p++)
        v[l++].elemento = v2[p];

}

void mergeSort(Item v[], int l, int r)
{
    if(l>=r) return;
    int meio = (l+r)/2;

    mergeSort(v, l, meio);
    mergeSort(v, meio+1, r);

    merge(v, l, meio, r);
    
}


int busca(Item *v, int l, int r, int chave)
{
    int meio;
    if(l > r) return r + 1;
    {
        meio = (l + r)/2;

        if (chave == v[meio].elemento) return meio;

        else
        {
            if(chave < v[meio].elemento) 
            return busca(v, l, meio-1, chave);

            else 
            return busca(v, meio+1, r, chave);
        }
    }
    return -1; //elemento não encontrado
}



int main(void)
{
    int m = 0, n = 0, ans = 0;

    scanf("%d %d", &m, &n);

    Item v[m];
    int buscaN[n];
    for (int i = 0; i < m; i++)
    {
        scanf(" %d", &v[i].elemento); 
        v[i].pos = i;
    }

    for (int j = 0; j < n; j++)
        scanf(" %d", &buscaN[j]);
    
    mergeSort(v, 0, m-1);

    for (int k = 0; k < n; k++)
    {
        ans = busca(v, 0, m-1, buscaN[k]);

        printf("%d\n", ans);
        
    }
    
    return 0;
}


// #include <stdio.h>

// void buscaBinaria(int *v, int l, int r, int chave)
// {
//     int meio;
//     if (l<=r)
//     {
//         meio = (l+r)/2;
//         if (chave == v[maio]) return meio;
//         else
//         {
//             if (chave < v[meio]) return buscaBinaria(v, l, meio-1, chave);
//             else return buscaBinaria(v, meio+1, r, chave);
//         }
//         return -1;        
//     }
// }