#include <stdio.h>

void ultrapassa(int *v, int limit, int sum)
{
    sum = sum + *v;
    if (*v == '\0') return;

    if (sum > limit)
    {
        sum = 0;
        ultrapassa(v+1, limit, sum);
        printf("%d\n", *v);
    }
    else ultrapassa(v+1, limit, sum);        
    
}
int main()
{
    int v[1000], limit, count = 0, sum = 0;

    while (scanf("%d", &v[count]))
    {
        if (v[count] == 0) break;
        count++;
    }
        
    scanf("%d", &limit);
    
    ultrapassa(v, limit, sum);

    return 0;
}
