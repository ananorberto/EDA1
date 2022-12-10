#include <stdio.h>

int main(void)
{
    int n, golsT1 = 0, golsT2 = 0, result = 0, chute = 1;

    while(scanf("%d", &n))
    {
        char time1[n + 1], time2[n + 1];
        int cRest=n, cRest2=n;

        scanf("%s\n%s", time1, time2);

        for (int i = 0; i < n; i++)
        {
            result++;
            //chutes Time1
            if (time1[i] == 'o') golsT1++;
            cRest--;

            if (cRest + golsT1 < golsT2 || cRest2 + golsT2 < golsT1) break;
            result++;

            //chutes Time2
            if (time2[i] == 'o') golsT2++;
            cRest2--;

            if (cRest + golsT1 < golsT2 || cRest2 + golsT2 < golsT1) break; 
            
        }
        golsT1 == golsT2 ? printf("Empate\n") : printf("%d\n", result);

        return 0;
    }
}
