#include <stdio.h>
#include <stdlib.h>


#define less(A,B) (A < B)
#define exch(A,B) int t = A; A = B; B = t;
#define cmp_exch(A,B) if(less(B,A)){exch(A,B);}

int separa(int* v, int l, int r)
{
    if(l >= r) return r;
    int p = v[r], i = l-1, j = r;
  
    for( ; ; )
    {
        while(p > v[++i]);
        while(p < v[--j])
        {
            if(j==l) 
            break;
        } 

        if(i >= j) break;
        exch(v[i], v[j]);
    }
    exch(v[r], v[i]);
    return i;
}

void quickSort(int* v, int l, int r)
{
    if(l >= r) return;
 
    exch(v[r - 1], v[(l + r)/2]); 
    cmp_exch(v[l], v[r]);  
    cmp_exch(v[l], v[r - 1]); 
    cmp_exch(v[r - 1], v[r]);

    int p = separa(v, l + 1, r - 1);
    quickSort(v, l, p - 1);
    quickSort(v, p + 1, r);

}

int main(){
    
    int v[100000];
    int i = 0, n;

    scanf("%d", &n);

    while (i < n)   scanf("%d", &v[i++]); 

    quickSort(v, 0, n - 1);

    for (int j = 0; j < n; j++)
    printf("%d ", v[j]);
    printf("\n");

    return 0;
}