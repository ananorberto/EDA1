#include <stdio.h>

long int fibonacci(int pos) {

    if(pos == 1 || pos == 2) return 1;
    
    static int l = 3;
    static long int x = 1, y = 1, z;
    
    if(l <= pos)
    {
        z = x + y;
        x = y;
        y = z;
        l++;
        fibonacci(pos);
    }

    return z;
}



int main(void)
{
    int n;
    long int res;
    
    scanf("%d", &n);

    res = fibonacci(n);
    printf("%ld\n", res);
}


