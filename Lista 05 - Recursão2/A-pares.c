#include <stdio.h>

int par(char *str, int p)
{
    if (str[2] == '\0') return p;

    if (*str == str[2])
    {
        p++;
        return par(str+1, p);
    }
    else
    {
        return par(str+1, p);
    }
}
int main()
{
    char string[201];

    scanf(" %s", string);
    printf("%d\n", par(string, 0));
    return 0;
}
