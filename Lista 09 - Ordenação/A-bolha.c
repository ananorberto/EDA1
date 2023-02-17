#include <stdio.h>

#define less(A,B) (A < B)
#define exch(A,B) int t = A; A = B; B = t;
#define cmp_exch(A,B) if(less(B,A)){exch(A,B);}

void BubbleSort(int *v, int l, int r)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            if (less(v[j+1], v[j]))
                cmp_exch(v[j], v[j+1]);
}
int main()
{
    int v[1000], i = 0;
    
    while (scanf("%d", &v[i]) != EOF) i++;

    BubbleSort(v, 0, i - 1);

    for (int j = 0; j < i; j++)
    printf("%d ", v[j]);
    printf("\n");
}

