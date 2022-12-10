#include <stdio.h>

int main()
{
    char oitavas[8], quartas[4], semi[2], camp;
    int  n1, n2;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d %d", &n1, &n2);
        n1 > n2 ? oitavas[i] = 65 + (2*i) : (oitavas[i] = 65 + (2*i) + 1);
    }
    for (int j = 0; j < 4; j++)
    {
        scanf("%d %d", &n1, &n2);
        n1 > n2 ? quartas[j] = oitavas[2*j] : (quartas[j] = oitavas[2*j + 1]);
    }
    for (int k = 0; k < 2; k++)
    {
        scanf("%d %d", &n1, &n2);
        n1 > n2 ? semi[k] = quartas[2*k] : (semi[k] = quartas[2*k + 1]);
    }
    scanf("%d %d", &n1, &n2);

    n1 > n2 ? camp = semi[0] : (camp = semi[1]);

    printf("%c\n", camp); 
    return 0;
}
