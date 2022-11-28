#include <stdio.h>

int sum(char *str) 
{
    int s = 0;
    if (*str == '\0')
    {
        return *str;
    }
    else
    {
        s = (*str) - '0' + sum(str+1);
        return s;
    }
    
}
int adding(int n) 
{
    if(n/10 == 0) return n;
    else 
    {
        return adding(n/10) + n%10;
    }
}
int function(int num) 
{
       
    if (num <= 9) return 1;
    else
    {
        num = adding(num);
        return function(num)+1;
    }
}

int main() 
{
    char string[1000];
    int x;
    while (scanf ("%s", string) && sum(string) != 0) 
    {
        x = function(sum(string));

        if(x == 0) break;
        if(sum(string)==9) x = 1;

        //Uso do operador ternário ?:
        sum(string) % 9 == 0 ?
        printf ("%s is a multiple of 9 and has 9-degree %i.\n", string, x):
        printf ("%s is not a multiple of 9.\n", string);

    }
    return 0;
}