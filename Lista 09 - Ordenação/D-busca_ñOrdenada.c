#include <stdio.h>

#define less(A,B) (A < B)
#define exch(A,B) Item t = A; A = B; B = t;

typedef struct 
{
   int pos; //salva a posição
   int elemento; //salva o elemento
}Item;

void insertionSort(Item *v, int l, int r)
{
   if(l == r) return;

    int min = l;

    //laço que encontra o menor elemento do vetor
    for(int j = l + 1; j <= r; j++)
    {
        if(less(v[j].elemento, v[min].elemento)) 
        min = j;
    }
    exch(v[min], v[l]);
    insertionSort(v, l+1, r);
}


int busca(Item *v, int l, int r, int chave)
{
    int meio;
    if(l <= r)
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
        scanf(" %d", &v[i].elemento); //.elemento = valor digitado no scanf
        v[i].pos = i;
    }

    for (int j = 0; j < n; j++)
        scanf(" %d", &buscaN[j]);
    
    insertionSort(v, 0, m-1);

    for (int k = 0; k < n; k++)
    {
        ans = busca(v, 0, m, buscaN[k]);

        (ans == -1)? printf("-1\n") :
        printf("%d\n", v[ans].pos);
        
    }
    
    return 0;
}

