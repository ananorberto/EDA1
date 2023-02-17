#include <stdio.h>
#include <stdlib.h>

#define less(A, B) (A < B)
#define exch(A,B) {int t = A;  A = B; B = t;}
#define cmpexch(A, B) {if(less(B,A))  exch(A,B)};

void merge1(int *v, int l, int r1, int r2)
{
    int * vetor = malloc(sizeof(int) * (r2-l+1));
    int k = 0;
    int i = l;
    int j = r1 + 1;

    while(i <= r1 && j <= r2){
        if(less(v[i], v[j]))
            vetor[k++] = v[i++];

        else    vetor[k++] = v[j++];
    }

    
    while (i <= r1)
        vetor[k++] = v[i++];
    
     while (j <= r2)
        vetor[k++] = v[j++];

    k = 0;

    for (i = l; i <= r2; i++)
        v[i] = vetor[k++];
    
    free(vetor);
}
int *merge2(int* v1, int* v2, int l1, int r1, int l2, int r2){
    int* v = malloc(sizeof(int)*((r1 - l1 + 1) + (r2 - l2 + 1)));
    int i1 = l1, i2 = l2, k = 0;

    while(i1 <= r1 && i2 <= r2){
        if(v1[i1] <= v2[i2])
            v[k++] = v1[i1++];
        
        else
            v[k++] = v2[i2++];
    }

    while(i1 <= r1)
        v[k++] = v1[i1++];
    

    while(i2 <= r2)
        v[k++] = v2[i2++];
    
    return v;

}


void mergeSort(int *v , int l, int r){
    if (l >= r) return;
    int meio = (l + r)/2;

    mergeSort(v, l, meio);
    mergeSort(v, meio +1, r);
    merge1(v,l,meio,r);
 
}

int main(void){
    int n;
    scanf("%d", &n);
    int v[n + 1];

    for(int i = 0; i < n; i++) scanf("%d", &v[i]);
    

    mergeSort(v, 0, n - 1);
    
    int new = 0;
    for(int j = 1; j < n; j++){
        if(v[new] != v[j])  v[++new] = v[j];
    }
    new++;

    if(new % 2 != 0)  v[new++] = 1000000000;

    int num[new/2];

    int j = 0;
    for(int k = 0; k < (new / 2); k++){
        num[k] = v[j] + v[j + 1];
        j += 2;
    }

    int tamN = new + (new / 2);
    int* num2 = merge2(v, num, 0, new - 1, 0, (new / 2) - 1);
   
    int newTam = 0;
    for(int l = 1; l < tamN; l++){
        if(num2[newTam] != num2[l])
            num2[++newTam] = num2[l];
    }
    newTam++;
    
    for(int i = 0; i < newTam; i += 4)  printf("%d\n", num2[i]);
    printf("Elementos: %d", newTam);

    return 0;
}



