#include <stdio.h>

#define less(A,B) (A < B)
#define exch(A,B) int t = A; A = B; B = t;
#define cmp_exch(A,B) if(less(B,A)){exch(A,B);}

void selectionSort(int *v, int l, int r)
{
   if(l == r) return;

    int min = l;

    //laço que encontra o menor elemento do vetor
    for(int j = l + 1; j <= r; j++)
    {
        if(less(v[j], v[min])) //se o v[j] for menor que o menor valor, o menor valor passa a sere j
        min = j;
    }
    exch(v[min], v[l]);
    selectionSort(v, l+1, r);
}
int main()
{
    int v[1000], i = 0;
    
    while (scanf("%d", &v[i]) != EOF) i++;

    selectionSort(v, 0, i - 1);

    for (int j = 0; j < i; j++)
    printf("%d ", v[j]);
    printf("\n");
}