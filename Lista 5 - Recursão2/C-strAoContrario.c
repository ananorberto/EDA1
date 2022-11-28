#include <stdio.h>

void invertStr(char *str)
{
    if(*str =='\0')return;

    invertStr(str + 1);
    printf("%c", *str);
    
}
int main()
{
    char str[500];
    scanf(" %s", str);

    invertStr(str);
    printf("\n");

    return 0;
}
