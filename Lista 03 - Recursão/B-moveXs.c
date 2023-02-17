#include <stdio.h>
#include <string.h>

int printXs(char *string)
{
    if(*string=='\0')
    {
        return;
    }
    else if (*string == 'x')
    {
        printf("%c", *string);
        printXs(string+1);
    }
    else printXs(string+1);
}

int printoutX(char *str)
{
    if(*str =='\0')
    {
        return;
    }
    else if (*str != 'x')
    {
        printf("%c", *str);
        printoutX(str+1);
    }
    else printoutX(str+1);
}

int main()
{
    char string[1100];
    scanf("%s",string);

    printoutX(string);
    printXs(string);
    printf("\n");

}