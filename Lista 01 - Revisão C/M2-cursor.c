#include <stdio.h>

int main()
{
    int qtdLine, line_i, column_i, nextL, nextC, size, count;
    
    char line[1001][1001];

    scanf("%d", &qtdLine);
    for (int i = 1; i <= qtdLine; i++)
    {
        scanf(" %1000[^\n]s", line[i]);
    }

    scanf("%i %i", &line_i, &column_i);
    nextC = column_i;
    nextL = line_i;
    
    char exe;
    while (scanf("\n%c", &exe) > 0)
    {
    if (exe == 'k')
    {
        if (nextL > 1)
        {
            nextL = nextL - 1;

            char *lineP = line[nextL];
            count = 0;

            for (int j = 0; j < 1001; j++)
            {
                if (lineP[j] != '\0')
                {
                    count++;
                }
            }
            size = count;
            if (nextC > size || (size < column_i && nextC < size))
            {
                nextC = size;
            }
            else
            {
                nextC = column_i;
            }
        }
    }
    if (exe == 'j')
    {
        if ((nextL + 1) <= qtdLine)
        {   
            nextL = nextL + 1;
            char *lineP = line[nextL];
            count = 0;

            for (int j = 0; j < 1001; j++)
            {
                if (lineP[j] != '\0')
                {
                    count++;
                }
            }
            size = count;

            if (nextC > size || (size < column_i && nextC < size))
            {
                nextC = size;
            }
            else
            {
                nextC = column_i;
            }
        }
    }

        printf("%i %i %c\n", nextL, nextC, line[nextL][nextC - 1]);
    }

    return 0;
}