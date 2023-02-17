#include <stdio.h>

void mergeSort(int *v, int l, int r)
{
    int v2[r + 1];
    int meio = 0;
    int j=l, m=0;

    if (l<r)
    {
        meio = (l + r) / 2;
        mergeSort(v, l, meio);
        mergeSort(v, meio + 1, r);
        int k = meio + 1;

        while (j <= meio && k <= r)
        {
            if (v[j] <= v[k])   v2[m] = v[j++]; 
            else   v2[m] = v[k++]; 
            m++;
        }

        while (j <= meio)
            v2[m++] = v[j++];

        while (k <= r)
            v2[m++] = v[k++];

        int x = 0;
        for (int i = l; i < r+1; i++)
            v[i] = v2[x++];
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int *v = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf(" %d", v + i);

    mergeSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
    
    return 0;
}