#include <stdio.h>

int main(void)
{
    int hex[1000], i=0, j=0; 
    char* pText = &hex;
    while (scanf("%x", &hex[i]) > 0)
    {   
        while (pText[j] != 0)
        {
            printf("%c",pText[j]);
            j++;
        }
        i++;
    }   
    printf("\n"); 
    return  0;
}
