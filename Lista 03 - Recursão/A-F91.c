#include <stdio.h>

int f91(int n)
{
    if(n >= 101){
        return n - 10;
 
    }
    else
    {
        return f91(f91(n + 11));
    }
}
int main()
{
    int n, result;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            result = f91(n);
            printf("f91(%d) = %d\n", n, result);
        }
    }     
    return 0;       
}
