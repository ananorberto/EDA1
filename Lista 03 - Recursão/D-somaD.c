#include <stdio.h>

int somaD (char *num, int *sum)
{
    if (*num=='\0') 
    {
        return sum;
    }
    *sum += (*num - 48);
    return somaD(num + 1, sum);
}

int main()
{
    char n[20];
    int s = 0;

    scanf("%s", n);
    
    somaD(n, &s);

    printf("%d\n", s);
    return 0;
}
