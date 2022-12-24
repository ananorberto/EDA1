#include <stdio.h>
#include <stdlib.h>

#define less(A,B) (A.pos < B.pos)
#define exch(A,B) Item t = A; A = B; B = t;
#define cmp_exch(A,B) if(less(B,A)){exch(A,B);}

typedef struct 
{
   int pos; 
   char elemento[30]; 
}Item;

void insertionSort(Item *v, int r)
{
    for(int i = r-1; i > 0; i--)
        cmp_exch(v[i-1], v[i]);

    for (int i = 2; i < r; i++)
    {
        int j = i;
        Item t = v[j];

        while (less(t, v[j-1]))
        {
           v[j] = v[j-1];
           j--;
        }
        v[j] = t;
    }
}

char *busca(Item *v, int l, int r, int chave)
{
    int meio;
    if(l <= r)
    {
        meio = (l + r)/2;

        if (chave == v[meio].pos) return v[meio].elemento;

        else
        {
            if(chave < v[meio].pos) 
            return busca(v, l, meio-1, chave);

            else 
            return busca(v, meio+1, r, chave);
        }
    }
    return "undefined"; 
}

int main(void)
{
    int n;

    scanf("%d", &n);
    Item *v = (Item *)malloc(n*sizeof(Item));
    
    for (int i = 0; i < n; i++)
        scanf("%d %s", &v[i].pos, v[i].elemento); 
        
    
    insertionSort(v, n);

    for (int k = 0; scanf(" %d", &k) == 1;)
        printf("%s\n", busca(v, 0, n, k));
        
    
    return 0;
}

