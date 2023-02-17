#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define less(A,B) (A < B)
#define exch(A,B) Item t = A; A = B; B = t;

typedef struct Item
{
   int pos; //salva a posição
   int elemento; //salva o elemento
   char str;
}Item;

void merge(struct Item *v, int l, int r1, int r2)
{
    struct Item *vetor = malloc(sizeof(Item)*(r2-l+1));
    int i = l, j = r1+1;
    int k = 0;

    while(i<=r1 && j<=r2)
    {
        if (v[i].elemento < v[j].elemento)  
            vetor[k++]=v[i++];
        else vetor[k++] = v[j++];
    }

    while (r1 >= i)  vetor[k++] = v[i++];
    while (r2 >= j)  vetor[k++] = v[j++];

    k = 0;
    for (i = l; i <= r2; i++)   v[i] = vetor[k++];

    free(vetor);
}

void mergeSort(struct Item *v, int l, int r)
{
    if(l>=r) return;
    int meio = (l+r)/2;

    mergeSort(v, l, meio);
    mergeSort(v, meio+1, r);

    merge(v, l, meio, r);
    
}

int main()
{
    char string[100001];
    scanf("%s", string);
    int j=0, k=0;
    struct Item s[strlen(string)];
    s[k].elemento = 0;
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[j] != string[i])
        {
            j = i;
            k++;
            s[k].elemento = 0;
        }
        s[k].elemento++;
        s[k].pos = j;
        s[k].str = string[j];
    }
    mergeSort(s, 0, k);

    for(int i = k; i >= 0; i--)
        printf(" %d %c %d\n", s[i].elemento, s[i].str, s[i].pos);


return 0;
}

