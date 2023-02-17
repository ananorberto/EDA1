#include <stdio.h>
#include <string.h>

int get(char *str, char *sub)
{
    if (*sub =='\0') return 0;

    if (*str != *sub) return -1;
    return get(str+1, sub+1);
    
}
int checkIni(char *str, char *sub, int place)
{
    if (*str != '\0') 
    {
        int x = -1;
        x = get(str, sub);
        if (x == 0) return place;
        return checkIni(str + 1, sub, ++place);
    }
    else return -1;
}
int checkFinal(char *str, char *sub, int place)
{
    int x = -1;
    x = get(str,sub);
    if (x >= 0) return place;
    return checkFinal(str-1, sub, --place);
}

int main(void)
{
    int init = 0, final = 0;
    char str[101], sub[101];
    scanf("%s\n%s", str, sub);

    init = checkIni(str, sub, 0);
    if (init != -1) 
    {
        final = checkFinal(&str[strlen(str)], sub, strlen(str));
        printf("%d\n", final - init + strlen(sub));
    }
    else printf("0\n");
    
    return 0;
}