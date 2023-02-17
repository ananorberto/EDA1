#include <stdio.h>
#include <stdlib.h>

#define less(A,B) (A < B)
#define exch(A,B) int t = A; A = B; B = t;
#define cmp_exch(A,B) if(less(B,A)){exch(A,B);}

void insertionSort(int *v, int l, int r)
{
    for(int i = r; i > l; i--)
        cmp_exch(v[i-1], v[i]);

    for (int i = l + 2; i <= r; i++)
    {
        int j = i, mao = v[j];

        while (less(mao, v[j-1]))
        {
           v[j] = v[j-1];
           j--;
        }
        v[j] = mao;
    }
    
}

int main()
{
    int *v, i = 0;
    v = malloc(sizeof(int)*50000);
    
    while (scanf("%d", &v[i]) != EOF) i++;

    insertionSort(v, 0, i - 1);

    for (int j = 0; j < i; j++)
    printf("%d ", v[j]);
    printf("\n");
}