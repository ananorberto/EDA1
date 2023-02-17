#include <stdio.h>

int main()
{
    int diametro;
    scanf("%d", &diametro);
    
    int altura, largura, profundidade;

    scanf("%d %d %d", &altura, &largura, &profundidade);

    (altura >= diametro)&&(largura >= diametro)&&(profundidade >= diametro) ?  
    printf("S\n") : printf("N\n");
  
    return 0;
}

