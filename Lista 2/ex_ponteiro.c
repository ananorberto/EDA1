#include <stdio.h>

int main(void)
{
    int x = 123;
    int y = 456;
    
    troca(&x, &y);
    printf("%d\n\n", x);
    printf("%d\n\n", y);

    return 0;
}
void troca(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}